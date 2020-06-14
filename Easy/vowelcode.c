#include <stdlib.h>
#include <string.h>

char *encode(const char *string) 
{
  char *newstring;
  int i = 0;
  int j = 0;
  
  newstring = malloc(sizeof(char) * (strlen(string) + 1));
  while (string[i])
  {
    if (string[i] == 'a')
      newstring[j] = '1';
    else if (string[i] == 'e')
      newstring[j] = '2';
    else if (string[i] == 'i')
      newstring[j] = '3';
    else if (string[i] == 'o')
      newstring[j] = '4';
    else if (string[i] == 'u')
      newstring[j] = '5';
    else
      newstring[j] = string[i];
    i++;
    j++;
  }
  newstring[j] = '\0';
  return (newstring);
}

char *decode(const char *string) 
{
   char *newstring;
  int i = 0;
  int j = 0;
  
  newstring = malloc(sizeof(char) * (strlen(string) + 1));
  while (string[i])
  {
    if (string[i] == '1')
      newstring[j] = 'a';
    else if (string[i] == '2')
      newstring[j] = 'e';
    else if (string[i] == '3')
      newstring[j] = 'i';
    else if (string[i] == '4')
      newstring[j] = 'o';
    else if (string[i] == '5')
      newstring[j] = 'u';
    else
      newstring[j] = string[i];
    i++;
    j++;
  }
  newstring[j] = '\0';
  return (newstring);
}

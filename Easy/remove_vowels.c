#include <stdlib.h>
#include <string.h>

int isvowel(char c)
{
  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    return (1);
  else
    return (0);
}

int numofvowels(const char *str)
{
  int i;
  int count;
  
  i = 0;
  count = 0;
  while (str[i] != '\0')
  {
    if (isvowel(str[i])) 
      count++;
    i++;
  }
  return (count);
}

char *disemvowel(const char *str)
{
  char  *string;
  int i;
  int j;
  
  i = 0;
  j = 0;
  if(!(string = malloc(sizeof(char) * (strlen(str) - numofvowels(str) + 1))))
    return (0);
  while (str[i] != '\0')
  {
    if (isvowel(str[i]))
      i++;
    else
      string[j++] = str[i++];
  }
  string[j] = '\0';
  return (string);
}

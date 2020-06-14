#include <stdlib.h>

int isconsonant(char c)
{
  return (strchr("bfghjklmnpqrstvwxyz", c) ? 1 : 0);
}

int isvowel(char c)
{
  return (strchr("aiu", c) ? 1 : 0);
}

int specialcase(char c)
{
  return (strchr("code", c) ? 1 : 0);
}

char *vowel_back(const char *str_in) 
{
  int i;
  int j;
  char  *newstring;
  
  i = 0;
  j = 0;
  newstring = malloc(sizeof(char) * strlen(str_in));
  while (str_in[i])
  {
    if (isconsonant(str_in[i]))
    {
      if (strchr("rstvwxyz", str_in[i]))
         newstring[j] = str_in[i] - ('z' - 'i');
      else
         newstring[j] = str_in[i] + ('z' - 'q');
    }
    else if (isvowel(str_in[i]))
    {
      if (strchr("ae", str_in[i]))
          newstring[j] = str_in[i] + ('z' - 'e');
      else
          newstring[j] = str_in[i] - ('z' - 'u');
    }
    else if (specialcase(str_in[i]))
    {
      if (str_in[i] == 'c' || str_in[i] == 'o')
          newstring[j] = str_in[i] - ('b' - 'a');
      else if (str_in[i] == 'd')
          newstring[j] = str_in[i] - ('d' - 'a');
      else if (str_in[i] == 'e')
          newstring[j] = str_in[i] - ('e' - 'a');
    }
    if (specialcase(newstring[j]))
        newstring[j] = str_in[i];
    j++;
    i++;
   }
   newstring[j] = '\0';
   return (newstring);
}

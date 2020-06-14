#include <stdbool.h>

bool xo (const char* str)
{
  int x;
  int o;
  
  x = 0;
  o = 0;
  while (*str)
  {
    if (*str == 'o' || *str == 'O')
      o++;
    else if (*str == 'x' || *str == 'X')
      x++;
    str++;
  }
  if (o == x)
    return true;
  return false;
}

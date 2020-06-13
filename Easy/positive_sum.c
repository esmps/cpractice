#include <stddef.h>

int positive_sum(const int *values, size_t count)
{
  int  n;
  int  i;
  
  n = 0;
  i = 0;
  while (count > 0)
  {
    if (values[i] > 0)
   {
     n = n + values[i++];
     count--;
    }
    else
    {
      i++;
      count--;
    }
  }
  return(n);
}

#include <stddef.h>
const char *odd_or_even(const int *v, size_t sz) 
{
  int res;
  int i;
  
  res = 0;
  i = 0;
  while (sz-- > 0)
    res += v[i++];
  if (res % 2)
    return "odd";
  else
    return "even";
}

int area_or_perimeter(int l , int w)
{
  int res;
  
  res = 0;
  if (l == w)
    res = l * w;
  else
    res = (l + w) * 2;
  return (res);
}

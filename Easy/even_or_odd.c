const char * even_or_odd(int number)
{
  int remainder;
  
  remainder = number % 2;
  if (remainder == 0)
    return ("Even");
  else
    return ("Odd");
}

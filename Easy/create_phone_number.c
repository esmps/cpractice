char *create_phone_number(char phnum[15], const unsigned char nums[10])
{
  int j = 0;
  int i = 0;

  phnum[j++] = '(';
  while (i < 3)
  {
    phnum[j++] = nums[i++] + '0';
  }
  phnum[j++] = ')';
  phnum[j++] = ' ';
  while (i < 6)
  {
    phnum[j++] = nums[i++] + '0';
  }
  phnum[j++] = '-';
  while (i < 10)
  {
    phnum[j++] = nums[i++] + '0';
  }
  phnum[j] = '\0';
  return (phnum);
}

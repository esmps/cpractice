size_t get_count(const char *s)
{
	 size_t  num;
    
	num = 0;
	 while (*s)
	{
		if (*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u')
    	 	   num++;
		s++;
	}
   	 return (num);
}

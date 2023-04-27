#include <stdio.h>

// if only uppercase return 1
int ft_str_is_uppercase(char* str)
{
	if(*str == NULL)
	{
		return -1;
	}
	
	int i = 0;
	for(; *(str + i); ++i)
	{
		if((int)*(str + i) < 65 || (int)*(str + i) > 90)
		{
			return 0;
		}
	}
	
	return 1;
}

// int main(void)
// {
	// char str[] = "WORLD";
	
	// int prd = ft_str_is_uppercase(str);
	// printf("%d\n", prd);
	
	// return 0;
// }
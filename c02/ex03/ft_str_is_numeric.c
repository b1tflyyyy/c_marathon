#include <stdio.h>

int ft_str_is_numeric(char* str)
{
	if(*str == NULL)
	{
		return 1;
	}
	
	int i = 0;
	for(; *(str + i); ++i)
	{
		if((int)*(str + i) < 48 || (int)*(str + i) > 57)
		{
			return 1;
		}
	}

	return 0;
}

// int main(void)
// {
	// char str[] = "22374923749023g";
	// int prd = ft_str_is_numeric(str);
	
	// printf("%d\n", prd);
	
	// return 0;
// }
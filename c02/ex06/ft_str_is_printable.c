#include <stdio.h>

// if only printable return 1
int ft_str_is_printable(char* str)
{
	if(*str == NULL)
	{
		return -1;
	}
	
	int i = 0;
	for(; *(str + i); ++i)
	{
		if((int)*(str + i) < 32 || (int)*(str + i) > 126)
		{
			return 0;
		}
	}
	
	return 1;
}

// int main(void)
// {
	// char str[] = "hello worldö";
	// int prd = ft_str_is_printable(str);
	
	// printf("%d\n", prd);
	
	// return 0;
// }
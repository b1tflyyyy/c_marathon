#include <stdio.h>

// if lowercase return 1
int ft_str_is_lowercase(char* str)
{
	if(*str == NULL)
	{
		return -1;
	}
	
	int i = 0;
	for(; *(str + i); ++i)
	{
		if((int)*(str + i) < 97 || (int)*(str + i) > 122)
		{
			return 0;
		}
	}
	
	return 1;
}

// int main(void)
// {
	// char str[] = "hellowolrdD";
	// int prd = ft_str_is_lowercase(str);
	
	// printf("%d\n", prd);
	
	// return 0;
// }
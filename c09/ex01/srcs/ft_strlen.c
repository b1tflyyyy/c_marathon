#include "../includes/libft.h"

int ft_strlen(char* str)
{
	int str_lenght = 0;
	
	while(*str)
	{
		str += 1;
		++str_lenght;
	}
	
	return str_lenght;
}

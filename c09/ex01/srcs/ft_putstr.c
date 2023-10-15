#include "../includes/libft.h"

void ft_putstr(char* str)
{
	int str_lenght = 0;
	int i = 0;
	
	while(*(str + i) != '\n')
	{
		++i;
		++str_lenght;
	}
	
	write(1, str, str_lenght);
}

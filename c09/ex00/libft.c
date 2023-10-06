#include "libft.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

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

int ft_strcmp(char* s1, char* s2)
{
	int i = 0;
	for(; *(s1 + i) && *(s2 + i); ++i)
	{
		if(*(s1 + i) != *(s2 + i))
		{
			return (int)*(s1 + i) - (int)*(s2 + i);
		}
	}
	
	return 0;
}

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

void ft_swap(int* a, int* b)
{
	int temp = { *a };
	
	*a = *b;
	*b = temp;
}


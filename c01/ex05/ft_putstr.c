#include <stdio.h>

void ft_putstr(char* str)
{
	int str_lenght = 0;
	int i = 0;
	
	while(*(str + i) != '\n')
	{
		++i;
		++str_lenght;
	}
	
	write(STDOUT_FILENO, str, str_lenght);
}

// int main(void)
// {
	// ft_putstr("hello world!\n");
	
	// return 0;
// }
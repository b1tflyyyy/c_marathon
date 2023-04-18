#include <stdio.h>

void ft_print_numbers(void)
{
	for(int i = 48; i < 58; ++i)
	{
		write(1, &i, 1);
	}
}

// int main(void)
// {
	// ft_print_numbers();
	
	// return 0;
// }
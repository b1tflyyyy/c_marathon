#include <stdio.h>
#include <unistd.h>

void ft_reverse_print_alphabet(void)
{
	for(int i = 122; i > 96; --i)
	{
		write(1, &i, 1);
	}
}

// int main(void)
// {
	// ft_reverse_print_alphabet();
	
	// return 0;
// }
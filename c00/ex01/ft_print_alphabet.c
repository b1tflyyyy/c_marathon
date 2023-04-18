#include <stdio.h>
#include <unistd.h>

void ft_print_alphabet(void)
{
	for(int i = 97; i < 123; ++i)
	{
		write(1, &i, 1);
	}
}

int main(void)
{
	ft_print_alphabet();
	
	return 0;
}
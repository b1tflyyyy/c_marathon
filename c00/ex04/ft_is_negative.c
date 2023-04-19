#include <stdio.h>

void ft_is_negative(int n)
{
	int N = 78;
	int P = 80;
	
	if (n < 0)
	{
		write(1, &N, 1);
		return;
	}
	
	write(1, &P, 1);
}

// int main(void)
// {
	// ft_is_negative(-1);
	
	// return 0;
// }
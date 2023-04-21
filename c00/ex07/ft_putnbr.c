#include <stdio.h>

void ft_putnbr(int nb)
{
	if (nb == 0)
	{
		return;
	}
	else if(nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	
	int temp = { nb };
	int symbol = { 0 };
	
	nb %= 10;
	ft_putnbr((temp - nb) / 10);
	
	symbol = 48 + nb;
	write(1, &symbol, 1);
}

// int main(void)
// {
	// ft_putnbr(-3421);
	
	// return 0;
// }
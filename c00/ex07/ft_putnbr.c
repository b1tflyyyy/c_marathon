#include <stdio.h>

void ft_putnbr(int nb)
{
	if (nb == 0)
	{
		return;
	}
	
	int temp = { nb };
	int ascii_code[] = { 48, 49, 50, 51, 52, 53, 54, 55, 56, 57 };
	
	nb %= 10;

	ft_putnbr((temp - nb) / 10);
	write(1, &ascii_code[nb], 1);
}

int main(void)
{
	ft_putnbr(6450);
	
	return 0;
}
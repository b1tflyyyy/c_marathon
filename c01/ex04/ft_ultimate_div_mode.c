#include <stdio.h>

void ft_ultimate_div_mode(int* a, int* b)
{
	int div = *a / *b;
	int mod = *a % *b;
	
	*a = div;
	*b = mod;
}

// int main(void)
// {
	// int a = 30;
	// int b = 20;
	
	// ft_ultimate_div_mode(&a, &b);
	
	// printf("%d %d", a, b);
	
	// return 0;
// }
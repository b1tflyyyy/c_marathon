#include "../includes/libft.h"

void ft_swap(int* a, int* b)
{
	int temp = { *a };
	
	*a = *b;
	*b = temp;
}

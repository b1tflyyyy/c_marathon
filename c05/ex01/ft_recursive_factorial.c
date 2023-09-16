#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if (nb == 1 || nb == 0)
    {
        return 1;
    }

    return nb * ft_recursive_factorial(nb - 1);
}
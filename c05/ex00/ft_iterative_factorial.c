#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    if (nb == 1 || nb == 0)
    {
        return 1;
    }

    return nb * ft_iterative_factorial(nb - 1);
}

// int main(void)
// {
//     int result = ft_iterative_factorial(4);
//     printf("%d\n", result);

//     return 0;
// }
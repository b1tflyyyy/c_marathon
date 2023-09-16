#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    if (nb == 1 || nb == 0)
    {
        return 1;
    }

    int factorial = 1;
    for (; nb != 0; --nb)
    {
        factorial *= nb;
    }

    return factorial;
}

// int main(void)
// {
//     int result = ft_iterative_factorial(5);
//     printf("%d\n", result);

//     return 0;
// }
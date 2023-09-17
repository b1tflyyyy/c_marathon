#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    if (nb == 0 && power == 0)
    {
        return 1;
    }

    int result = 1;
    for (int i = 0; i < power; ++i)
    {
        result *= nb;
    }

    return result;
}

// int main(void)
// {
//     int result = ft_iterative_power(2, 3);
//     printf("%d\n", result);


//     return 0;
// }
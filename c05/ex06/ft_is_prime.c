#include <stdio.h>

int ft_is_prime(int nb)
{
    for (int i = 2; i < nb; ++i)
    {
        if (nb % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

// int main(void)
// {
//     int result = ft_is_prime(29);
//     printf("result is prime = %d\n", result);

//     return 0;
// }
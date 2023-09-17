#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    if (power == 0)
    {
        return 1;
    }   

    return nb * ft_recursive_power(nb, power - 1);
}

// int main(void)
// {
//     int result = ft_recursive_power(2, 3);
//     printf("%d\n", result);

//     return 0;
// }
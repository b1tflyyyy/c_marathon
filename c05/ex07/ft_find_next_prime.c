#include <stdio.h>

int ft_find_next_prime(int nb)
{
    int counter = 0;

    for (int i = nb + 1; 1; ++i)
    {
        for (int j = 2; j < i; ++j)
        {
            if (i % j == 0)
            {
                ++counter;
                continue;
            }
        }

        if (counter == 0)
        {
            return i;
        }

        counter = 0;
    }

    return -1;
}

// int main(void)
// {
//     int result = ft_find_next_prime(5827);
//     printf("%d\n", result);

//     return 0;
// }
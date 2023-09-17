#include <stdio.h>

int ft_fibonacci(int index)
{
    if (index <= 1)
    {
        return index;
    }

    return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}

// int main(void)
// {
//     int result = ft_fibonacci(10);
//     printf("%d\n", result);

//     return 0;
// }
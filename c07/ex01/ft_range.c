#include <stdlib.h>
#include <stdio.h>

int* ft_range(int min, int max)
{
    if (min >= max)
    {
        return (void*)0;
    }

    const size_t size = max - min;
    int* new_array = malloc(sizeof(int) * size);

    for (size_t i = 0; i < size && min < max; ++min, ++i)
    {
        new_array[i] = min;        
    }

    return new_array;
}

// int main(void)
// {
//     int* result = ft_range(127, 150);

//     for (size_t i = 0; i < 24; ++i)
//     {
//         printf("%d\n", result[i]);
//     }

//     return 0;
// }
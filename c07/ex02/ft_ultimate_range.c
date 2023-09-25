#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int** range, int min, int max)
{
    if (min >= max)
    {
        *range = (void*)0;
        return 0;
    }

    const size_t size = max - min;
    *range = malloc(sizeof(int) * size);

    for (size_t i = 0; i < size && min < max; ++min, ++i)
    {
        (*range)[i] = min;        
    }

    return size;
}

// int main(void)
// {
//     int* ptr = (void*)0;
//     int range_size = ft_ultimate_range(&ptr, 20, 30);

//     printf("range size = %d\n", range_size);

//     for (size_t i = 0; i < range_size; ++i)
//     {
//         printf("%d\n", ptr[i]);
//     }

//     return 0;
// }
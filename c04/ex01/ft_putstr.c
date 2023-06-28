#include <stdio.h>

void ft_putstr(char* str)
{
    for (; *str; ++str)
    {
        write(1, str, 1);
    }
}

// int main(void)
// {
//     char str[] = "hello world!!!\n";
//     ft_putstr(str);

//     return 0;
// }
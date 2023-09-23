#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* ft_strdup(char* src)
{
    size_t new_str_length = strlen(src); 
    char* new_str = malloc(sizeof(char) * new_str_length);

    for (size_t i = 0; i < new_str_length; ++i)
    {
        new_str[i] = src[i];
    }

    return new_str;
}

// int main(void)
// {
//     char* str = "hello world !!!";
//     char* new_str = ft_strdup(str);

//     printf("new_str = %s, new_str addr = %p, old_str addr = %p\n", new_str, &str, &new_str);

//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* ft_strjoin(int size, char** strs, char* sep)
{
    if (size == 0)
    {
        return (void*)0;
    }

    // calc common length
    size_t common_length = size - 1;
    for (size_t i = 0; i < size; ++i)
    {
        common_length += strlen(strs[i]);
    }

    char* new_str = malloc(common_length * sizeof(char));
    size_t index = 0;

    for (size_t i = 0; i < size; ++i)
    {
        for (char* tmp = strs[i]; *tmp; ++tmp, ++index)
        {
            new_str[index] = *tmp;
        }
        
        if (i != size - 1)
        {
            new_str[index++] = *sep;
        }
    }

    return new_str;
}

// int main(void)
// {
//     const size_t string_count = 5;
    
//     char** strs = malloc(string_count * sizeof(char*));
    
//     strs[0] = "hello";
//     strs[1] = "ako";
//     strs[2] = "sa";
//     strs[3] = "mas";
//     strs[4] = "gggggg";

//     char* result = ft_strjoin(string_count, strs, ";");
//     printf("result = %s\n", result);

//     return 0;
// }
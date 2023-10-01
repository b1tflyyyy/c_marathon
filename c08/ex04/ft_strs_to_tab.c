#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ft_stock_str.h"

struct s_stock_str* ft_strs_to_tab(int ac, char** argv)
{
    struct s_stock_str* s_str_stocks = malloc(sizeof(struct s_stock_str) * ac); 

    for (size_t i = 0; i < ac; ++i)
    {
        s_str_stocks[i].size = strlen(&argv[i][0]);
        s_str_stocks[i].str = &argv[i][0];
        
        s_str_stocks[i].copy = malloc(sizeof(char) * s_str_stocks[i].size);
        strcpy(s_str_stocks[i].copy, &argv[i][0]);
    }

    return s_str_stocks;
}

int main(void)
{
    const size_t str_count = 4;
    char** strs = malloc(sizeof(char*) * str_count);

    strs[0] = "hello";
    strs[1] = "ako";
    strs[2] = "sa";
    strs[3] = "mas";

    struct s_stock_str* ptr = ft_strs_to_tab(str_count, strs);
    for (size_t i = 0; i < str_count; ++i)
    {
        printf("number_of_string = %lu, str_size = %lu, str = %s, copy_str = %s\n", i, ptr[i].size, ptr[i].str, ptr[i].copy);
    }

    free(ptr);

    return 0;
}
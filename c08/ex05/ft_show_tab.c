#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "../ex04/ft_stock_str.h"

#define nl write(1, "\n", 2)

void ft_putnbr(int nb)
{
	if (nb == 0)
	{
		return;
	}
	else if(nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	
	int temp = { nb };
	int symbol = { 0 };
	
	nb %= 10;
	ft_putnbr((temp - nb) / 10);
	
	symbol = 48 + nb;
	write(1, &symbol, 1);
}

void ft_show_tab(struct s_stock_str* par)
{
    for (struct s_stock_str* tmp_ptr = par; tmp_ptr->str != (void*)0; ++tmp_ptr)
    {
        write(1, tmp_ptr->str, tmp_ptr->size);
        nl;

        write(1, tmp_ptr->copy, tmp_ptr->size);
        nl;

        ft_putnbr(tmp_ptr->size);
        nl;
        nl;
    }
}

struct s_stock_str* ft_strs_to_tab(int ac, char** argv)
{
    struct s_stock_str* s_str_stocks = malloc(sizeof(struct s_stock_str) * (ac + 1)); 

    size_t i = 0;
    for (; i < ac; ++i)
    {
        s_str_stocks[i].size = strlen(&argv[i][0]);
        s_str_stocks[i].str = &argv[i][0];
        
        s_str_stocks[i].copy = malloc(sizeof(char) * s_str_stocks[i].size);
        strcpy(s_str_stocks[i].copy, &argv[i][0]);
    }

    s_str_stocks[i].size = 0;
    s_str_stocks[i].copy = (void*)0;
    s_str_stocks[i].str = (void*)0;

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
    ft_show_tab(ptr);

    return 0;
}
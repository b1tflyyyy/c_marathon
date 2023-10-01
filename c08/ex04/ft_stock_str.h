#ifndef FT_STOCK_STR_H
#define FT_STOCK_STR_H

#include <stddef.h>

typedef struct s_stock_str
{
    size_t size;
    char* str;
    char* copy;
} t_stock_str;

#endif

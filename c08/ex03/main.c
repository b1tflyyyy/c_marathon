#include <stdio.h>
#include "ft_point.h"

void set_point(struct t_point* point)
{
    point->x = 42;
    point->y = 21;
}

int main(void)
{
    struct t_point point;
    set_point(&point);

    printf("%d, %d\n", point.x, point.y);

    return 0;
}   
#include <stdio.h>

int main(int argc, char** argv)
{
    while (**argv)
    {
        write(1, (*argv)++, 1);
    }

    return 0;
}
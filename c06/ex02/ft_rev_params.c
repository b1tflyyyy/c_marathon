#include <stdio.h>

int main(int argc, char** argv)
{
    for (int i = argc - 1; i != 0; --i)
    {
        char* ptr = argv[i];

        while (*ptr)
        {
            write(1, ptr++, 1);
        }

        write(1, "\n", 2);
    }

    return 0;
}
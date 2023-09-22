#include <stdio.h>

int main(int argc, char** argv)
{
    for (int i = 1; i < argc; ++i)
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
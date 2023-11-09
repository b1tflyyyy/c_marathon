#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char** argv)
{
    if (argc > 2 || argc == 0)
    {
        printf("Smth went wrong!!!\nTry to write name of file!\n");
        return -1;
    }

    int f = open(argv[1], O_RDONLY);
    if (f < 0)
    {
        printf("File was not found!!!\nTry again and write the correct name!!!\n");
        return -1;
    }

    char buffer[256] = { };
    size_t sz = read(f, buffer, sizeof(buffer));
    if (sz < 0)
    {
        printf("Cannot read the file!!!\n");
        return -1;
    }

    buffer[sz] = '\0';
    printf("%s\n\n===END===\n\n", buffer);
    close(f);

    return 0;
}

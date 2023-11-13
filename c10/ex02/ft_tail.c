#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char** argv)
{
    if (argc < 1 || argc > 4)
    {
        printf("error, missing params !!!\n");
        return -1;
    }   

    size_t n_bytes = 0;
    if (argc == 4)
    {
        if (strcmp("-c", argv[1]) == 0)
        {
            n_bytes = atoi(argv[2]);
            printf("n bytes = %zu\n", n_bytes);
        }
    }

    int fd = open(argv[argc - 1], O_RDONLY);
    if (fd < 0)
    {
        printf("File was not found!!!\nTry again and write the correct name!!!\n");
        return -1;
    }
    
    const size_t buffer_size = 1024;

    // allocate 1024 bytes
    char* buffer = malloc(sizeof(char) * buffer_size);
    size_t sz = read(fd, buffer, buffer_size);
    
    if (sz < 0)
    {
        printf("Cannot read the file!!!\n");
        return -1;
    }

    buffer[buffer_size] = '\0'; 
    size_t i = n_bytes == 0 ? 0 : sz - n_bytes;

    for (; i < sz; ++i)
    {
        printf("%c", buffer[i]);
    }
   
    return 0;
}

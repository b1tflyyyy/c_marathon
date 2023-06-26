#include <stdio.h>

int ft_strlen(char* str)
{
	int str_length = 1;
	while(*(str + str_length))
	{
		++str_length;
	}
	
	return str_length;
}

unsigned int ft_strlcat(char* dest, char* src, unsigned int size)
{
    const int dest_length = ft_strlen(dest);
    int src_length = ft_strlen(src);

    if (size <= dest_length)
    {
        return size + src_length;
    } 

    src_length = 0;
    for (; src[src_length] && src_length + dest_length < size - 1; ++src_length)
    {
        dest[src_length + dest_length] = src[src_length];
    }

    dest[src_length + dest_length] = '\0';
    return src_length + dest_length;
}

// int main(void)
// {
//     char str[] = "hello";
//     char str1[] = " world!!!";

//     unsigned int result = ft_strlcat(str, str1, 4);
//     printf("%d", result);

//     return 0;
// }
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

char* ft_strncat(char* dest, const char* src, unsigned int nb)
{
    const int dest_length = ft_strlen(dest);

    for (int i = dest_length; i < dest_length + nb; ++i) 
    {
        *(dest + i) = *(src + (i - dest_length));
    }

    return dest;
}

// int main(void)
// {
//     char str1[20] = "hello ";
//     char str2[] = "world!!!";

//     char* str = ft_strncat(str1, str2, sizeof(str2));
//     printf("%s", str);

//     return 0;
// }
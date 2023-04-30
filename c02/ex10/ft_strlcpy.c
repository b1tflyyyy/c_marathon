#include <stdio.h>

int ft_strlen(char* str)
{
	int str_length = 1;
	while(*(str + str_length))
	{
		++str_length;
	}
	
	return ++str_length;
}


unsigned int ft_strlcpy(char* dest, char* src, unsigned int size)
{
	int i = 0;
	for(; i < size - 1; ++i)
	{
		*(dest + i) = *(src + i);
	}
	
	*(dest + i + 1) = '\0';
	
	return ft_strlen(src);
}

// int main(void)
// {
	// char str[] = "hello, world";
	// char str1[10];
	
	// unsigned int len = ft_strlcpy(str1, str, sizeof(str1));
	
	// printf("%s\n", str1);
	// printf("%d\n", len);
	
	// return 0;
// }
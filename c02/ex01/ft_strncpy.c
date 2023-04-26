#include <stdio.h>

char* ft_strncpy(char* dest, char* src, unsigned int n)
{
	int i = 0;
	for(; i < n && *(src + i) != '\0'; ++i)
	{
		*(dest + i) = *(src + i);
	}
	
	*(dest + i) = '\0';
	
	return dest;
}

// int main(void)
// {
	// char str1[15] = "hello world";
	// char str2[15];
	
	// ft_strncpy(str2, str1, 5);
	
	// printf("%s", str2);
	
	// return 0;
// }
#include <stdio.h>

char* ft_strcpy(char* dest, char* src)
{
	int i = 0;
	while(*(src + i)!= '\0')
	{
		*(dest + i) = *(src + i);
		++i;
	}
	
	*(dest + i) = '\0';
	
	return dest;
}

// int main(void)
// {
	// char str1[15] = "hello world"; // char* str1 = "hello world";
	// char str2[15];
	
	// ft_strcpy(str2, str1);
	
	// printf("%s", str2);
	
	// printf("\n");
	// printf("%s", str1);
	
	// return 0;
// }
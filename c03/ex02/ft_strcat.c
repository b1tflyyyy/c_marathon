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

char* ft_strcat(char* dest, char* src)
{
	const int dest_length = ft_strlen(dest);
 	const int src_length = ft_strlen(src);
	const int sum_length = dest_length + src_length; 

	for(int i = dest_length; i < sum_length; ++i)
	{
		*(dest + i) = *(src + (i - dest_length));
	}

	return dest;
}

// int main(void)
// {
// 	char str1[20] = "hello ";
// 	char str2[] = "world!!!!";
	
// 	char* str = ft_strcat(str1, str2);
// 	printf("%s", str);
	
// 	return 0;
// }
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

// int main(void)
// {
//     const char* str = "hello";
//     int length = ft_strlen(str);

//     printf("%d", length);

//     return 0;
// }
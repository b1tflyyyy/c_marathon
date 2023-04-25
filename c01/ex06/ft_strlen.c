#include <stdio.h>

int ft_strlen(char* str)
{
	int str_lenght = 0;
	
	while(*str != '\n')
	{
		str += 1;
		++str_lenght;
	}
	
	return str_lenght;
}

// int main(void)
// {
	// int lenght = ft_strlen("hello\n");
	// printf("%d\n", lenght);
	
	// return 0;
// }
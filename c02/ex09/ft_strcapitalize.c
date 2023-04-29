#include <stdio.h>

// if the first - upper
// after " " - upper 
// if number - continue
// if lower - continue

char* ft_strcapitalize(char* str)
{
	int i = 0;
	for(; *(str + i); ++i)
	{
		if(i == 0 && (int)*(str + i) >= 97 && (int)*(str + i) <= 122)
		{
			*(str + i) = (int)*(str + i) - 32;
		}
		else if(*(str + i) == ' ' && (int)*(str + i + 1) >= 97 && (int)*(str + i + 1) <= 122)
		{
			*(str + i + 1) = (int)*(str + i + 1) - 32;
		}
	}
	
	return str;
}

// int main(void)
// {
	// char str[] = "Hello world Ako 33 + sa mas 55 843 + - 3 %";
	// ft_strcapitalize(str);
	
	// printf("%s", str);
	
	// return 0;
// }
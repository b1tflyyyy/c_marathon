#include <stdio.h>

// -32
char* ft_strupcase(char* str)
{
	int i = 0;
	for(; *(str + i); ++i)
	{
		if((int)(*(str + i)) < 97 ||
		   (int)(*(str + i)) > 122)
		   {
			   continue;
		   }
		
		*(str + i) = ((int)*(str + i)) - 32;
	}
	
	return str;
}

// int main(void)
// {
	// char str[] = "helLo world * = -tt";
	// ft_strupcase(str);
	
	// printf("%s", str);
	
    // return 0;
// }
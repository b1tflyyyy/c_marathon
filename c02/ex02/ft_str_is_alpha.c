#include <stdio.h>

int ft_str_is_alpha(char* str)
{
	if(*str == NULL)
	{
		return 1;
	}
	
	for(int i = 0; *(str + i) != '\0'; ++i)
	{
		if((int)(*(str + i)) < 65 ||
		   (int)(*(str + i)) > 90 &&
		   (int)(*(str + i)) < 97 ||
		   (int)(*(str + i)) > 122)
		   {
			   return 0;
		   }
		   
		   printf("%d\n", i);
	}
	
	return 1;
}

// int main(void)
// {
	// char* str = "hello_world";
	// int result = ft_str_is_alpha(str);

	// printf("%d", result);
	
	// return 0;
// }
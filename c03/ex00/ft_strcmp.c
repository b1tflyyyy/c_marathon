#include <stdio.h>

int ft_strcmp(char* s1, char* s2)
{
	int i = 0;
	for(; *(s1 + i) && *(s2 + i); ++i)
	{
		if(*(s1 + i) != *(s2 + i))
		{
			return (int)*(s1 + i) - (int)*(s2 + i);
		}
	}
	
	return 0;
}

// int main(void)
// {
	// char str1[] = "hello";
	// char str2[] = "Hello";
	
	// int result = ft_strcmp(str1, str2);
	
	// if (result < 0) 
	// {
        // printf("%s is less than %s\n", str1, str2);
    // } 
	// else if (result > 0) 
	// {
        // printf("%s is greater than %s\n", str1, str2);
    // } 
	// else 
	// {
        // printf("%s is equal to %s\n", str1, str2);
    // }
	
	// return 0;
// }
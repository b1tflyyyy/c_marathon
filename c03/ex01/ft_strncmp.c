#include <stdio.h>

int ft_strncmp(char* s1, char* s2, unsigned int n)
{
	for(int i = 0; i < n; ++i)
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
	// char str2[] = "helpful";
	
	// int result = ft_strncmp(str1, str2, 3);
	
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
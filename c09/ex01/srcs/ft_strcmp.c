#include "../includes/libft.h"

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

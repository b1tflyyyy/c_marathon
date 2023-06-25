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

char* ft_strstr(char* str, char* to_find)
{
    const int str_length = ft_strlen(str);
    const int find_length = ft_strlen(to_find);

    for (int i = 0; i < str_length; ++i)
    {
        if (str[i] != to_find[0])
        {
            continue;
        }

        for (int j = 0; j < find_length; ++j)
        {
            if (str[i + j] != to_find[j])
            {
                return "(null)";
            }
        }

        return (str + i);
    }

    return "(null)";
}

// int main(void)
// {
//     char hello[] = "hello";
//     char hello1[] = "worldhello ako sa mas";

//     char* result = ft_strstr(hello1, hello);
//     printf("%s", result);

//     return 0;
// }
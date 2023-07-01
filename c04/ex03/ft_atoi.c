#include <stdio.h>
#include <stdbool.h>

int ft_atoi(char* str)
{
    int num = 0;
    unsigned int num_length = 0;
    
    bool is_minus = false;
    bool flag = true;

    char* second_ptr = NULL;

    for (; *str; ++str)
    {
        if ((int)*str >= 48 && (int)*str <= 57)
        {
            second_ptr = str;
            //printf("error\n");
            break;
        }
        if (*str == '-' && flag)
        {
            is_minus = true;
            flag = false;
            
            continue;
        }
    }

    for (; (int)*str >= 48 && (int)*str <= 57; ++str)
    {
        ++num_length;
    }

    //printf("%d\n", (int)*second_ptr);

    int copy = num_length;
    int tmp = 0;
    for (int i = 0; i < num_length; ++i)
    {
        tmp = (int)*(second_ptr + i) - 48;
        //printf("%d\n", tmp);
    
        for (int j = 0; j < copy - 1; ++j)
        {
            tmp *= 10;
        }
        copy--;
        num += tmp;
        
    }

    if (is_minus)
    {
        num *= -1;
    }

    return num;
}

int main(void)
{
    int num = ft_atoi("    ------+--+423423444ab567");
    printf("%d\n", num);

    return 0;
}
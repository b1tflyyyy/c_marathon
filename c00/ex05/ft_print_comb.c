#include <stdio.h>

void ft_print_comb(void)
{
	for (int i = 48; i < 58; ++i)
	{
		for(int j = i + 1; j < 58; ++j)
		{
			for (int m = j + 1; m < 58; ++m)
			{
				write(1, &i, 1);
                write(1, &j, 1);
                write(1, &m, 1);
                write(1, "\n", 1);
			}
		}
	}
}

int main(void)
{
	ft_print_comb();
	
	return 0;
}
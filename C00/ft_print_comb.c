#include <stdio.h>
#include <unistd.h>

void	ft_print_comb(void)
{
	char i, j, k, firstTime = 'y';
	
	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (k = j+1; k <= '9'; k++)
			{
				if (firstTime == 'y')
				{
					firstTime = 'n';
				}
				else 
				{
					write(1, ", ", 2);
				}
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &k, 1);
			}
		}
	}
}

int main (void)
{
	ft_print_comb ();
	return 0;
	
}

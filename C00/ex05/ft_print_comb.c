/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:19:15 by ide-oliv          #+#    #+#             */
/*   Updated: 2022/01/20 11:37:55 by ide-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print(char i, char j, char k)
{
	if (i != '0' || j != '1' || k != '2')
	{
		write(1, ", ", 2);
	}
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			k = j + 1;
			while (k <= '9')
			{
				ft_print(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}

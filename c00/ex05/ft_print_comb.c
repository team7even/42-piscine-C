/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromo-me <dromo-me@c1r14s2.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 19:23:00 by dromo-me          #+#    #+#             */
/*   Updated: 2025/02/05 14:17:29 by dromo-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void);
void	my_print(char i, char dec, char uni, int una_vez);

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/

void	ft_print_comb(void)
{
	int		unavez;
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				unavez = (i == '0' && j == '1' && k == '2');
				my_print(i, j, k, unavez);
				k++;
			}
			j++;
		}
		i++;
	}
}

void	my_print(char cen, char dec, char uni, int una_vez)
{
	if (una_vez)
	{
		write(1, &cen, 1);
		write(1, &dec, 1);
		write(1, &uni, 1);
	}
	else
	{
		write(1, ", ", 2);
		write(1, &cen, 1);
		write(1, &dec, 1);
		write(1, &uni, 1);
	}
}

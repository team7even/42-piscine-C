/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromo-me <dromo-me@c1r14s2.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:40:47 by dromo-me          #+#    #+#             */
/*   Updated: 2025/02/05 16:10:33 by dromo-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb2(void);
void	my_print_2pairnbr(int pri, int seg, int una_vez);

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/

void	ft_print_comb2(void)
{
	int	unavez;
	int	primer;
	int	segundo;

	primer = 0;
	while (primer <= 98)
	{
		segundo = primer + 1;
		while (segundo <= 99)
		{
			unavez = (primer == 0 && segundo == 1);
			my_print_2pairnbr(primer, segundo, unavez);
			segundo++;
		}
		primer++;
	}
}

void	my_print_2pairnbr(int pri, int seg, int una_vez)
{
	char	dec_num1;
	char	uni_num1;
	char	dec_num2;
	char	uni_num2;

	uni_num1 = (pri % 10) + '0';
	dec_num1 = (pri / 10) + '0';
	uni_num2 = (seg % 10) + '0';
	dec_num2 = (seg / 10) + '0';
	if (!una_vez)
		write(1, ", ", 2);
	write(1, &dec_num1, 1);
	write(1, &uni_num1, 1);
	write(1, " ", 1);
	write(1, &dec_num2, 1);
	write(1, &uni_num2, 1);
}

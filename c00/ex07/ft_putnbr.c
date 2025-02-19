/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromo-me <dromo-me@c1r14s2.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:16:20 by dromo-me          #+#    #+#             */
/*   Updated: 2025/02/10 17:36:07 by dromo-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);

/*int	main(void)
{
	int	i;

	i = 0;
	while (1)
	{
		scanf("%d", &i);
		ft_putnbr(i);
		printf("\n");
	}
	return (0);
}*/

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	ft_putchar(nb + '0');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromo-me <dromo-me@c1r14s2.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 19:03:08 by dromo-me          #+#    #+#             */
/*   Updated: 2025/02/03 19:19:13 by dromo-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

void	ft_is_negative(int n);

/*int	main(void)
{
	int	num;

	while(1)
	{
		printf("Escribe un numero: ");
		scanf("%d",&num);
		printf("\n");
		ft_is_negative(num);
		printf("\n");
	}
	return (0);
}*/

void	ft_is_negative(int n)
{
	char	neg;
	char	pos;

	neg = 'N';
	pos = 'P';
	if (n < 0)
	{
		write(1, &neg, 1);
	}
	else
	{
		write(1, &pos, 1);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromo-me <dromo-me@c1r14s2.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:44:33 by dromo-me          #+#    #+#             */
/*   Updated: 2025/02/03 19:01:03 by dromo-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void);

/*int	main(void)
{
	char	salto;

	salto = '\n';
	ft_print_numbers();
	write(1, &salto, 1);
	return (0);
}*/

void	ft_print_numbers(void)
{
	char	d;

	d = '0';
	while (d <= '9')
	{
		write(1, &d, 1);
		d++;
	}
}

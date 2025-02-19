/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromo-me <dromo-me@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:34:33 by dromo-me          #+#    #+#             */
/*   Updated: 2025/02/12 11:25:28 by dromo-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

/*int	main(void)
{
	int	x;
	int	y;
	int	div;
	int	mod;

	x = 8;
	y = 3;
	div = 0;
	mod = 0;
	ft_div_mod(x, y, &div, &mod);
	printf("x = %d y = %d div = %d mod = %d\n", x, y, div, mod);
	return (0);
}*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

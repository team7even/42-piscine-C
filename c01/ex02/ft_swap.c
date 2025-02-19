/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromo-me <dromo-me@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:41:25 by dromo-me          #+#    #+#             */
/*   Updated: 2025/02/11 16:01:10 by dromo-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b);

/*int	main(void)
{
	int	x;
	int	y;

	x = 2;
	y = 4;
	printf("Before swap x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("After swap x = %d, y = %d\n", x, y);
	return (0);
}*/

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromo-me <dromo-me@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 23:07:16 by dromo-me          #+#    #+#             */
/*   Updated: 2025/02/26 01:26:25 by dromo-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_digits(int *digits, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(digits[i] + '0');
		i++;
	}
}

void	ft_increment(int *digits, int n)
{
	int	i;
	int	j;

	i = n - 1;
	while (i >= 0 && digits[i] == 9 - (n - 1 - i))
		i--;
	digits[i]++;
	j = i + 1;
	while (j < n)
	{
		digits[j] = digits[j - 1] + 1;
		j++;
	}
}

void	ft_print_combn(int n)
{
	int	digits[10];
	int	i;

	if (n <= 0 || n >= 10)
		return ;
	i = 0;
	while (i < n)
	{
		digits[i] = i;
		i++;
	}
	while (digits[0] != 10 - n)
	{
		ft_print_digits(digits, n);
		ft_putchar(',');
		ft_putchar(' ');
		ft_increment(digits, n);
	}
	ft_print_digits(digits, n);
	ft_putchar('\n');
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}

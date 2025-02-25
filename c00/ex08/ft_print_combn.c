/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromo-me <dromo-me@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 01:00:17 by dromo-me          #+#    #+#             */
/*   Updated: 2025/02/25 01:41:07 by dromo-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_valid_comb(int num, int n)
{
	int	prev_digit;
	int	current;
	int	digits_count;

	prev_digit = 10;
	digits_count = 0;
	while (num > 0)
	{
		current = num % 10;
		if (current >= prev_digit)
			return (0);
		prev_digit = current;
		num /= 10;
		digits_count++;
	}
	return (digits_count == n);
}

void	print_number(int num, int n)
{
	char	buffer[n];
	int		temp;
	int		i;

	temp = num;
	i = n - 1;
	while (i >= 0)
	{
		buffer[i] = (temp % 10) + '0';
		temp /= 10;
		i--;
	}
	i = 0;
	while (i < n)
	{
		ft_putchar(buffer[i]);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	num;
	int	end;
	int	i;

	num = 0;
	end = 1;
	i = 0;
	if (n <= 0 || n >= 10)
		return ;
	while (i < n)
	{
		end *= 10;
		i++;
	}
	while (num < end)
	{
		if (is_valid_comb(num, n))
		{
			print_number(num, n);
			if (num != end - 1)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		num++;
	}
	ft_putchar('\n');
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromo-me <dromo-me@student.malaga>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:16:10 by dromo-me          #+#    #+#             */
/*   Updated: 2025/02/10 18:26:34 by dromo-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

/*int	main(void)
{
	char	c;
	c = 'C';
	ft_putchar(c);
}*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

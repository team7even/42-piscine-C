/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pustr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromo-me <dromo-me@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:23:24 by dromo-me          #+#    #+#             */
/*   Updated: 2025/02/13 13:37:04 by dromo-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	*str;

	str = "Hola mundo!\n";
	ft_putstr(str);
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}

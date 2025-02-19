/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromo-me <dromo-me@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:07:55 by dromo-me          #+#    #+#             */
/*   Updated: 2025/02/11 13:13:39 by dromo-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

/*int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "ABCDEFIHIJK";
	s2 = "ABCDEFGHIJK";

	printf("el valor del return es: %d\n", ft_strcmp(s1, s2));
	return (0);
}*/

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while( s1[i] != '\0' )
	{
		if( s1[i] == s2[i] )
			i++;
		else
			break;
	}
	return (s1[i] - s2[i]);
}

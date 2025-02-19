/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromo-me <dromo-me@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:38:36 by dromo-me          #+#    #+#             */
/*   Updated: 2025/02/12 17:14:08 by dromo-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);
//void	print_array(int *arr, int size);

/*int	main(void)
{
	int	i_arr[] = {1, 2, 3, 4, 5};
	int	i;
	int	size = sizeof(i_arr) / sizeof(i_arr[0]);

	i = 0;
	ft_rev_int_tab(i_arr, 5);
	printf("\ndespues de llamada:");
	print_array(i_arr, size);
	return (0);
}*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	aux = 0;
	while (i < size / 2)
	{
		aux = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = aux;
		i++;
	}
}

/*void	print_array(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
		printf("%d ", arr[i]);
	printf("\n");
}*/

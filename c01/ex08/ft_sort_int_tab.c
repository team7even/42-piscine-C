/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromo-me <dromo-me@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:47:34 by dromo-me          #+#    #+#             */
/*   Updated: 2025/02/12 19:15:13 by dromo-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);
void	ft_swap(int *a, int *b);

/*int	main(void)
{
	int	int_arr[] = {5,3,4,2,1};
	int	size = sizeof(int_arr) / sizeof(int_arr[0]);
	int	i;

	i = 0;
	ft_sort_int_tab(int_arr, size);
	while (i < size)
	{
		printf("%d ",int_arr[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	flag_swap;

	flag_swap = 1;
	while (flag_swap)
	{
		flag_swap = 0;
		i = 0;
		while (i < (size - 1))
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap(&tab[i], &tab[i + 1]);
				flag_swap = 1;
			}
			i++;
		}
	}
}

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

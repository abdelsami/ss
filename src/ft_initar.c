/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 13:41:11 by asamia            #+#    #+#             */
/*   Updated: 2022/09/17 16:41:41 by asamia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	*init_array(int ac, char **av)
{
	int	i;
	int	*array;

	i = 0;
	if (ac == 2 && ft_strlen(av[1]) == 0)
		return (0);
	array = malloc(sizeof(int) * ac - 1);
	while (i < ac - 1)
	{
		if (ft_isnum(av[i + 1]) == 0)
		{
			free (array);
			write(2, "ERROR\n", 6);
			return (0);
		}
		else
		{
			array[i] = ft_atoi(av[i + 1]);
			i++;
		}
	}
	return (array);
}

int	*sort(int *ar, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (ar[i] > ar[j])
			{
				tmp = ar[i];
				ar[i] = ar[j];
				ar[j] = tmp;
			}
		j++;
		}
	i++;
	}
	return (ar);
}

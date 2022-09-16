/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 13:44:54 by asamia            #+#    #+#             */
/*   Updated: 2022/08/12 14:42:29 by asamia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"push_swap.h"

int	ft_isnum(char *num)
{
	int	i;

	i = 0;
	if (check_max(num) == 0)
		return (0);
	if (num[0] == '-' || num[0] == '+')
	{
		if (ft_strlen(num) == 1)
			return (0);
		i++;
	}
	while (num[i] != '\0')
	{
		if (num[i] < 48 || num[i] > 57)
			return (0);
		else
			i++;
	}
	return (1);
}

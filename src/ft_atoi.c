/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 13:37:11 by asamia            #+#    #+#             */
/*   Updated: 2022/08/12 13:37:54 by asamia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	helpatoi(const char *str, unsigned long n, int s, int i)
{
	if (str[i] == '-')
	{
		s = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] > 47 && str[i] < 58)
	{
		n = 10 * n + (str[i] - 48);
		i++;
	}
	if (n > 9223372036854775807)
	{
		if (s == 1)
			return (-1);
		return (0);
	}
	return (n * s);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				s;
	unsigned long	n;

	s = 1;
	i = 0;
	n = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	return (helpatoi(str, n, s, i));
}

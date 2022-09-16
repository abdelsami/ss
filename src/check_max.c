/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_max.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 14:41:54 by asamia            #+#    #+#             */
/*   Updated: 2022/08/12 14:46:41 by asamia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"push_swap.h"

int	check_max(char *num)
{
	if (ft_strlen(num) >= 11 && num[0] == '-')
	{
		if (ft_strlen(num) > 11 || (ft_strlen(num) == 11
				&& ft_strncmp("-2147483648", num, ft_strlen(num)) < 0))
			return (0);
	}
	else if (ft_strlen(num) >= 10 && num[0] != '-')
	{
		if (ft_strlen(num) > 10 || (ft_strlen(num) == 10
				&& ft_strncmp("2147483647", num, ft_strlen(num)) < 0))
			return (0);
	}
	return (1);
}

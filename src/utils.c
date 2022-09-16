/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsemlali <lsemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:57:31 by lsemlali          #+#    #+#             */
/*   Updated: 2022/04/11 11:57:32 by lsemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	st_size(t_list **stack_a)
{
	int		i;
	t_list	*tmp;

	i = 0;
	if (!(*stack_a))
		return (0);
	tmp = *stack_a;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

int	whereis_he(t_list **st, int k)
{
	t_list	*tmp;
	int		frst;
	int		i;

	tmp = *st;
	frst = 0;
	i = 0;
	while (tmp)
	{
		if (tmp->value == k)
				frst = i;
		tmp = tmp->next;
		i++;
	}
	return (frst);
}

int	get_div(int y, int j)
{
	if (y >= 250 && y < 350)
		j = 6;
	else if (y > 100)
		j = 5;
	if (y <= 100)
		j = 3;
	return (j);
}

void	smart_push(t_list **a, t_list **b, int z, int p)
{
	if ((*a)->value > (z / 2) + (p / 2))
	{
		pb(a, b, 1);
		rb(b, 1);
	}
	else
		pb(a, b, 1);
}

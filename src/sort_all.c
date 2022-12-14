/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:37:17 by asamia            #+#    #+#             */
/*   Updated: 2022/09/17 16:26:21 by asamia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	sa_sb(t_list **stack, char c, int p);

int	sml_index(t_list **stack_a)
{
	t_list	*curr;
	int		min_index;
	int		min_value;
	int		i;

	curr = *stack_a;
	min_value = curr->value;
	min_index = 0;
	i = 0;
	while (curr)
	{
		if (curr->value < min_value)
		{
			min_value = curr->value;
			min_index = i;
		}
		i++;
		curr = curr->next;
	}
	return (min_index);
}

void	bring_sml(t_list **stack_a, int x, int i)
{
	int	y;

	y = x;
	if (x >= i / 2)
	{
		while (x < i)
		{
			rra(stack_a, 1);
			x++;
		}
	}
	if (y < i / 2)
	{
		while (y > 0)
		{
			ra(stack_a, 1);
			y--;
		}
	}
}

void	sort_three(t_list **stack_a)
{
	int	x;
	int	y;
	int	z;

	x = (*stack_a)->value;
	y = (*stack_a)->next->value;
	z = (*stack_a)->next->next->value;
	if (x > y && x > z && y < z)
		ra(stack_a, 1);
	if (x > y && x > z && y > z)
	{
		ra(stack_a, 1);
		sa_sb(stack_a, 'a', 1);
	}
	if (x < y && y > z && x > z)
		rra(stack_a, 1);
	if (x < y && y > z && x < z)
	{
		sa_sb(stack_a, 'a', 1);
		ra(stack_a, 1);
	}
	if (x < z && y < z && x > y)
		sa_sb(stack_a, 'a', 1);
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	int	x;
	int	y;
	int	i;

	i = 1;
	x = sml_index(stack_a);
	y = 2;
	while (y > 0)
	{
		bring_sml(stack_a, x, 6 - i);
		pb(stack_a, stack_b, 1);
		x = sml_index(stack_a);
		y--;
		i++;
	}
	if ((*stack_b)->value < (*stack_b)->next->value)
		sa_sb(stack_b, 'b', 1);
	sort_three(stack_a);
	pa(stack_a, stack_b, 1);
	pa(stack_a, stack_b, 1);
}

void	sort_all(t_list **stack_a, t_list **stack_b, int ac)
{
	int	k;

	k = sml_index(stack_a) + 1;
	if (ac == 6)
		sort_five(stack_a, stack_b);
	if (ac > 102)
		sort_big(stack_a, stack_b, 7);
	if (ac > 6 && ac <= 102)
		sort_big(stack_a, stack_b, 4);
}

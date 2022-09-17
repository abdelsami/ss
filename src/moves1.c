/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:26:37 by asamia            #+#    #+#             */
/*   Updated: 2022/09/17 15:12:45 by asamia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa_sb(t_list **stack, char c, int p)
{
	int	tmp;

	tmp = (*stack)->value;
	(*stack)->value = (*stack)->next->value;
	(*stack)->next->value = tmp;
	if (p && c == 'a')
		write(1, "sa\n", 3);
	if (p && c == 'b')
		write(1, "sb\n", 3);
}

void	ss(t_list **stack_a, t_list **stack_b, int p)
{
	sa_sb(stack_a, 'a', 0);
	sa_sb(stack_b, 'b', 0);
	if (p)
		write(1, "ss\n", 3);
}

void	pa(t_list **stack_a, t_list **stack_b, int p)
{
	t_list	*tmp;

	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = NULL;
	ft_lstadd_front(stack_a, tmp);
	if (p)
		write(1, "pa\n", 3);
}

void	pb(t_list **stack_a, t_list **stack_b, int p)
{
	t_list	*tmp;

	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = NULL;
	ft_lstadd_front(stack_b, tmp);
	if (p)
		write(1, "pb\n", 3);
}

void	ra(t_list **stack_a, int p)
{
	t_list	*tmp;

	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = NULL;
	ft_lstadd_back(stack_a, tmp);
	if (p)
		write(1, "ra\n", 3);
}

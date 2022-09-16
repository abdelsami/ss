/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:33:07 by asamia            #+#    #+#             */
/*   Updated: 2022/08/22 19:03:45 by asamia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_list **stack_b, int p)
{
	t_list	*tmp;

	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = NULL;
	ft_lstadd_back(stack_b, tmp);
	if (p)
		write(1, "rb\n", 3);
}

void	rr(t_list **stack_a, t_list **stack_b, int p)
{
	ra(stack_a, 0);
	rb(stack_b, 0);
	if (p)
		write(1, "rr\n", 3);
}

void	rra(t_list **stack_a, int p)
{
	t_list	*tmp;
	t_list	*head;
	t_list	*last;

	head = *stack_a;
	while (head->next)
	{
		tmp = head;
		head = head->next;
	}
	last = tmp->next;
	tmp->next = NULL;
	last->next = *stack_a;
	*stack_a = last;
	if (p)
		write(1, "rra\n", 4);
}

void	rrb(t_list **stack_b, int p)
{
	t_list	*tmp;
	t_list	*head;
	t_list	*last;

	head = *stack_b;
	while (head->next)
	{
		tmp = head;
		head = head->next;
	}
	last = tmp->next;
	tmp->next = NULL;
	last->next = *stack_b;
	*stack_b = last;
	if (p)
		write(1, "rrb\n", 4);
}

void	rrr(t_list **stack_a, t_list **stack_b, int p)
{
	rra(stack_a, 0);
	rrb(stack_b, 0);
	if (p)
		write(1, "rrr\n", 4);
}

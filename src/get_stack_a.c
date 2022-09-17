/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stack_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:05:56 by asamia            #+#    #+#             */
/*   Updated: 2022/09/17 15:09:49 by asamia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*get_stack_a(int *arr, int n)
{
	t_list	*head;
	t_list	*tmp;

	head = NULL;
	while (n--)
	{
		tmp = new_node(arr[n]);
		tmp -> next = head;
		head = tmp;
	}
	return (head);
}

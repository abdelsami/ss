/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 17:12:58 by asamia            #+#    #+#             */
/*   Updated: 2022/08/22 18:59:00 by asamia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	int		i;
	int		*ar;
	int		*sorted;
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = 0;
	stack_b = 0;
	if (init_array(ac, av) == 0)
		return (0);
	ar = init_array(ac, av);
	if (check_duplicate(ar, ac) == 0)
	{
		free(ar);
		return (0);
	}
	i = ac - 1;
	sorted = sort(init_array(ac, av), i);
	ar = sar(ar, sorted, i);
	stack_a = get_stack_a(ar, i);
	if(is_sorted(&stack_a) == 0)
	{
	if (ac == 3)
        sa_sb(&stack_a,'a', 1);
	else	
		sort_all(&stack_a, &stack_b, ac);
	}
	while (stack_a != NULL)
	{
		printf("%d\n", stack_a->value);
		stack_a = stack_a->next;
	}
	return 0;
}

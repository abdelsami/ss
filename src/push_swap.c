/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 17:12:58 by asamia            #+#    #+#             */
/*   Updated: 2022/09/17 16:24:58 by asamia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	sml_index(t_list **stack_a);

void	help(t_list **stack_a, t_list **stack_b, int ac)
{
	int	k;

	if (ac == 3)
	{
		sa_sb (stack_a, 'a', 1);
		return ;
	}
	else if (ac == 4)
		sort_three (stack_a);
	else if (ac == 5)
	{	
		k = sml_index (stack_a) + 1;
		while (--k > 0)
			ra (stack_a, 1);
		pb (stack_a, stack_b, 1);
		sort_three (stack_a);
		pa (stack_a, stack_b, 1);
	}
	else
		sort_all (stack_a, stack_b, ac);
}

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
		write(2, "error\n", 6);
		return (0);
	}
	i = ac - 1;
	sorted = sort(init_array(ac, av), i);
	ar = sar(ar, sorted, i);
	stack_a = get_stack_a(ar, i);
	if (is_sorted(&stack_a) == 0)
		help(&stack_a, &stack_b, ac);
	return (0);
}

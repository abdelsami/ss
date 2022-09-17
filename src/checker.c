/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:32:55 by asamia            #+#    #+#             */
/*   Updated: 2022/09/17 16:42:15 by asamia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_list_sort(t_list *a)
{
	int	nb;

	nb = a->value;
	a = a->next;
	while (a)
	{
		if (nb > (int)a->value)
			return (0);
		nb = a->value;
		a = a->next;
	}
	return (1);
}

void	instructions(t_list **a, t_list **b, char *s)
{
	if (!ft_strncmp("sa\n", s, ft_strlen(s)))
		sa_sb(a, 'a', 0);
	else if (!ft_strncmp("sb\n", s, ft_strlen(s)))
		sa_sb(b, 'b', 0);
	else if (!ft_strncmp("ss\n", s, ft_strlen(s)))
		ss(a, b, 0);
	else if (!ft_strncmp("pa\n", s, ft_strlen(s)))
		pa(a, b, 0);
	else if (!ft_strncmp("pb\n", s, ft_strlen(s)))
		pb(a, b, 0);
	else if (!ft_strncmp("ra\n", s, ft_strlen(s)))
		ra(a, 0);
	else if (!ft_strncmp("rb\n", s, ft_strlen(s)))
		rb(b, 0);
	else if (!ft_strncmp("rr\n", s, ft_strlen(s)))
		rr(a, b, 0);
	else if (!ft_strncmp("rra\n", s, ft_strlen(s)))
		rra(a, 0);
	else if (!ft_strncmp("rrb\n", s, ft_strlen(s)))
		rrb(b, 0);
	else if (!ft_strncmp("rrr\n", s, ft_strlen(s)))
		rrr(a, b, 0);
	free(s);
}

int main(int ac, char **av)
{
	int *ar;
	t_list *a;
	t_list *b;
	char	*s;

	if(init_array(ac, av) == 0)
		return (0);
	ar = init_array(ac, av);
	if (check_duplicate(ar, ac) == 0)
	{
		free(ar);
		write(2, "error\n", 6);
		return (0);
	}
	s = get_next_line(0);
	while (s)
	{
		instructions(&a, &b, s);
		s = get_next_line(0);
	}
	if (check_list_sort(a))
		write(1,"OK\n", 3);
	else
		write(1, "KO\n", 3);
	return (0);
}

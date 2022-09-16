/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 14:49:42 by asamia            #+#    #+#             */
/*   Updated: 2022/08/22 19:07:55 by asamia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct t_list{
	int				value;
	struct t_list	*next;
}t_list;

t_list	*get_stack_a(int *arr, int n);

int	is_sorted(t_list **stack_a);
t_list	*ft_lstlast(t_list *lst);
void	sort_big(t_list **a, t_list **b, int j);
void	sort_five(t_list **stack_a, t_list **stack_b);
void	smart_push(t_list **a, t_list **b, int z, int p);
int	get_div(int y, int j);
int	whereis_he(t_list **st, int k);
int	st_size(t_list **stack_a);
int		*sort(int *ar, int size);
void    sort_all(t_list **stack_a, t_list **stack_b,int ac);
int     *sar(int *ar, int *sorted, int size);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	sa_sb(t_list **stack, char c, int p);
void	ss(t_list **stack_a, t_list **stack_b, int p);
void	pa(t_list **stack_a, t_list **stack_b, int p);
void	pb(t_list **stack_a, t_list **stack_b, int p);
void	ra(t_list **stack_a, int p);
void	rb(t_list **stack_b, int p);
void	rr(t_list **stack_a, t_list **stack_b, int p);
void	rra(t_list **stack_a, int p);
void	rrb(t_list **stack_b, int p);
void	rrr(t_list **stack_a, t_list **stack_b, int p);
t_list	*new_node(int value);
int		ft_atoi(const char *str);
int		ft_isnum(char *num);
int		ft_strlen(char *str);
int		*init_array(int ac, char **av);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		check_duplicate(int *ar, int ac);
int		check_max(char *num);

#endif

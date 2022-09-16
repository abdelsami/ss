#include "push_swap.h"
int	is_sorted(t_list **stack_a)
{
	t_list	*tmp;
	tmp = NULL;

	if (!(*stack_a))
		return (1);
	tmp = *stack_a;
	while (tmp->next)
	{
		if (tmp->value > tmp->next->value)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
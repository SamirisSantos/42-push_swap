/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 12:55:55 by sade-ara          #+#    #+#             */
/*   Updated: 2025/06/11 14:25:15 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_number(t_stack *stack)
{
	int i = 0;
	int size = stack_size(stack->a);
	int max_bits = 0;
	int max_index = size - 1;
	while ((max_index >> max_bits) != 0)
		max_bits++;
	while (i < max_bits)
	{
		int j = 0;
		while (j < size)
		{
			if (((stack->a->index >> i) & 1) == 0)
				pb(stack);
			else
				ra(stack);
			j++;
		}
		while (stack->b)
			pa(stack);
		i++;
	}
}
void	smallest_number(t_stack *stack)
{
	l_stack *tmp = stack->a;
	l_stack *min_node = tmp;
	int		min_index = 0;
	int		i = 0;

	if (!tmp)
		return;
	while (tmp)
	{
		if (tmp->i < min_node->i)
		{
			min_node = tmp;
			min_index = i;
		}
		tmp = tmp->next;
		i++;
	}
	while (min_index > 0)
	{
		ra(stack);
		min_index--;
	}
	pb(stack);
}

void	sort_small(t_stack *stack)
{
		
	smallest_number(stack);

	if(stack->a->i > stack->a->next->i)
		sa(stack);
	pa(stack);

	//printList(stack->a);
}

void	sort_fiver_number(t_stack *stack)
{
	smallest_number(stack);
	smallest_number(stack);
	printList(stack->a);
	printList(stack->b);

	if (stack->b && stack->b->next && stack->b->i > stack->b->next->i)
		sb(stack);

	sort_small(stack);

	pa(stack);
	pa(stack);
	printList(stack->a);
	printList(stack->b);
}
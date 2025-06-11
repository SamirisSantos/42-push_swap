/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 12:55:55 by sade-ara          #+#    #+#             */
/*   Updated: 2025/06/11 14:10:47 by sade-ara         ###   ########.fr       */
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
	l_stack *prev = NULL;
	l_stack *min_node = tmp;
	l_stack *min_prev = NULL;

	if (!tmp)
		return;

	while (tmp->next)
	{
		if (tmp->next->i < min_node->i)
		{
			min_node = tmp->next;
			min_prev = tmp;
		}
		tmp = tmp->next;
	}

	if (min_prev)
		min_prev->next = min_node->next;
	else
		stack->a = min_node->next;

	min_node->next = stack->b;
	stack->b = min_node;
}

void	sort_small(t_stack *stack)
{
	l_stack *tmp ;
	
	smallest_number(stack);

	if(stack->a->i > stack->a->next->i)
		sa(stack);
	pa(stack);

	printList(stack->a);
}
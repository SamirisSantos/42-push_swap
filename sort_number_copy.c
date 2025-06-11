/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_number_copy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 12:55:55 by sade-ara          #+#    #+#             */
/*   Updated: 2025/06/11 12:16:16 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_value(l_stack *stack)
{
	int	min;
	if (!stack)
		return (0);
	min = stack->i;
	while (stack)
	{
		if (stack->i < min)
			min = stack->i;
		stack = stack->next;
	}
	return (min);
}

int	find_position(l_stack *stack, int value)
{
	int	pos;
	pos = 0;
	while (stack)
	{
		if (stack->i == value)
			return (pos);
		pos++;
		stack = stack->next;
	}
	return (-1);
}


void	sort_number(t_stack *stack)
{
	int	min;
	int	pos;
	int	size;
	int	i;
	while (stack->a)
	{
		min = find_min_value(stack->a);
		pos = find_position(stack->a, min);
		size = stack_size(stack->a);
		if (pos <= size / 2)
		{
			i = 0;
			while (i++ < pos)
				ra(stack); // rotaciona até o menor valor estar no topo
		}
		else
		{
			i = 0;
			while (i++ < size - pos)
				rra(stack); // reverse rotate
		}
		pb(stack); // envia o menor para b
	}
	while (stack->b)
		pa(stack); // retorna para a ordenado
}

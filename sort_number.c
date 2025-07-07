/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 12:55:55 by sade-ara          #+#    #+#             */
/*   Updated: 2025/06/11 15:29:42 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack *stack)
{
	int	a = stack->a->i;
	int	b = stack->a->next->i;
	int	c = stack->a->next->next->i;

	if (a > b && b < c && a < c)
		sa(stack);
	else if (a > b && b > c)
	{
		sa(stack);
		rra(stack);
	}
	else if (a > b && b < c && a > c)
		ra(stack);
	else if (a < b && b > c && a < c)
	{
		sa(stack);
		ra(stack);
	}
	else if (a < b && b > c && a > c)
		rra(stack);
}

void	sort_five(t_stack *stack)
{
	while (stack_size(stack->a) > 3)
	{
		if (stack->a->index == 0 || stack->a->index == 1)
			pb(stack);
		else
			ra(stack);
	}
	sort_three(stack);
	if (stack->b->index < stack->b->next->index)
		sb(stack);

	pa(stack);
	pa(stack);
}

void	sort_number_radix(t_stack *stack, int size)
{
	int max_bits;
	int i;
	int j;

	max_bits = 0;
	i = 0;
	while ((size - 1) >> max_bits)
		max_bits++;
	while (i < max_bits)
	{
		j = 0;
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

void	sort_number(t_stack *stack)
{
	int size;
	
	size = stack_size(stack->a);
	if (size <= 1 || check_ordered(stack->a))
		return ;
	else if (size == 2)
	{
		if (stack->a->i > stack->a->next->i)
			sa(stack);
	}
	else if (size == 3)
		sort_three(stack);
	else if (size <= 5)
		sort_five(stack);
	else
	{
		index_stack(stack->a);
		sort_number_radix(stack, size);
	}
}

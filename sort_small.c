/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 15:26:34 by sade-ara          #+#    #+#             */
/*   Updated: 2025/08/19 15:59:37 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_three(t_stack *stack)
{
	int	a;
	int	b;
	int	c;

	a = stack->a->i;
	b = stack->a->next->i;
	c = stack->a->next->next->i;
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

static void	sort_four(t_stack *stack)
{
	// printList(stack->a);
	index_stack(stack->a);
	while (stack_size(stack->a) > 3)
	{
		if (stack->a->index == 0)
			pb(stack);
		else
			ra(stack);
	}
	sort_three(stack);
	pa(stack);
}

static void	sort_five(t_stack *stack)
{
	// printList(stack->a);
	index_stack(stack->a);
	while (stack_size(stack->a) > 3)
	{
		if (stack->a->index == 0 || stack->a->index == 1)
			pb(stack);
		else
			ra(stack);
	}
	sort_three(stack);
	if (stack_size(stack->b) > 1 && stack->b->index < stack->b->next->index)
		sb(stack);
	pa(stack);
	pa(stack);
}

void	sort_small(t_stack *stack)
{
	int	size;

	size = stack_size(stack->a);
	if(size == 3)
		sort_three(stack);
	else if(size == 4)
		sort_four(stack);
	else if(size == 5)
		sort_five(stack);
}
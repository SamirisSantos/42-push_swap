/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 16:24:00 by sade-ara          #+#    #+#             */
/*   Updated: 2025/08/14 16:27:11 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack *stack)
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

void	sort_four(t_stack *stack)
{
	while (stack->a->index != 0)
		ra(stack);
	if (!check_ordered(stack->a))
	{
		pb(stack);
		sort_three(stack);
		pa(stack);
	}
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
	if (stack_size(stack->b) > 1 && stack->b->index < stack->b->next->index)
		sb(stack);
	pa(stack);
	pa(stack);
}

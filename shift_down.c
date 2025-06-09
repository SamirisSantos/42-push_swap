/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift_down.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 14:16:46 by sade-ara          #+#    #+#             */
/*   Updated: 2025/06/09 15:40:23 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	shift_down (l_stack **stack)
{
	l_stack *before;
	l_stack *last;

	if (!*stack || !(*stack)->next)
		return ;
	
	before = *stack;
	while(before->next->next != NULL)
		before  = before->next;
	last = before->next;
	before->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	rra (t_stack *stack)
{
	shift_down(&stack->a);
	ft_putstr("rra\n");
}

void	rrb (t_stack *stack)
{
	shift_down(&stack->b);
	ft_putstr("rrb\n");
}

void	rrr (t_stack *stack)
{
	shift_down(&stack->a);
	shift_down(&stack->b);
	ft_putstr("rrr\n");
}
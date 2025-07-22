/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift_up.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 14:16:33 by sade-ara          #+#    #+#             */
/*   Updated: 2025/06/09 15:40:14 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	shift_up(t_l_stack **stack)
{
	t_l_stack	*first;
	t_l_stack	*last;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	last = *stack;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	*stack = first->next;
	first->next = NULL;
}

void	ra(t_stack *stack)
{
	shift_up(&stack->a);
	ft_putstr("ra\n");
}

void	rb(t_stack *stack)
{
	shift_up(&stack->b);
	ft_putstr("rb\n");
}

void	rr(t_stack *stack)
{
	shift_up(&stack->a);
	shift_up(&stack->b);
	ft_putstr("rr\n");
}

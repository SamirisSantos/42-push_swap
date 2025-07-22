/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 14:17:38 by sade-ara          #+#    #+#             */
/*   Updated: 2025/06/09 12:11:17 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_top(t_l_stack **stack)
{
	t_l_stack	*fst;
	t_l_stack	*snd;

	if (!*stack || !(*stack)->next)
		return ;
	fst = *stack;
	snd = fst->next;
	fst->next = snd->next;
	snd->next = fst;
	*stack = snd;
}

void	sa(t_stack *stack)
{
	swap_top(&stack->a);
	ft_putstr("sa\n");
}

void	sb(t_stack *stack)
{
	swap_top(&stack->b);
	ft_putstr("sb\n");
}

void	ss(t_stack *stack)
{
	swap_top(&stack->a);
	swap_top(&stack->b);
	ft_putstr("ss\n");
}

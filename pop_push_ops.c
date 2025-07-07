/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_push_ops.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 14:14:51 by sade-ara          #+#    #+#             */
/*   Updated: 2025/06/09 13:17:56 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pop_push_top (l_stack **src, l_stack **dest)
{
	l_stack *temp;

	if (!src)
		return ;
	temp = *src;
	*src = (*src)->next;
	temp->next = *dest;
	*dest = temp;
}
void	pa (t_stack *stack)
{
	pop_push_top(&stack->b, &stack->a);
	ft_putstr("pa\n");
}

void	pb (t_stack *stack)
{
	pop_push_top(&stack->a, &stack->b);
	ft_putstr("pb\n");
}
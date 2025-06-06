/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 19:59:41 by sade-ara          #+#    #+#             */
/*   Updated: 2025/06/06 14:00:24 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Swaps
void	swap_top(l_stack **stack)
{
	l_stack	*fst;
	l_stack	*snd;

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
	//ft_putstr("sa\n");
}

void	sb(t_stack *stack)
{
	swap_top(&stack->b);
	//ft_putstr("sb\n");
}

void	ss(t_stack *stack)
{
	swap_top(&stack->a);
	swap_top(&stack->b);
	//ft_putstr("ss\n");
}

//Push
void	pop_push_top(l_stack **src, l_stack **dest)
{
	l_stack *temp;

	if(!src)
		return ;
	temp = *src;
	*src = (*src)->next;
	temp->next = *dest;
	*dest = temp;
}
void	pa(t_stack *stack)
{
	pop_push_top(&stack->b, &stack->a);
	//ft_putstr("pa\n");
}

void	pb(t_stack *stack)
{
	pop_push_top(&stack->a, &stack->b);
	//ft_putstr("pb\n");
}

//Rotates shift up
void	shift_up(l_stack **stack)
{
	l_stack *first;
	l_stack *last;

	if (!*stack || !(*stack)->next)
		return ;
	
	// 6 4 8

	first = *stack; // 6
	last = *stack; // 6
	while(last->next != NULL)
		last = last->next; //final do loop last = 8
	
	last->next = first;
	*stack = first->next;
	first->next = NULL;
}

void	ra(t_stack *stack)
{
	shift_up(&stack->a);
	//ft_putstr("ra\n");
}

void	rb(t_stack *stack)
{
	shift_up(&stack->b);
	//ft_putstr("rb\n");
}

void	rr(t_stack *stack)
{
	shift_up(&stack->a);
	shift_up(&stack->b);
	//ft_putstr("rr\n");
}
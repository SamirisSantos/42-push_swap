/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 21:45:31 by sade-ara          #+#    #+#             */
/*   Updated: 2025/06/09 14:33:35 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

l_stack* newl_stack(int value) {
	l_stack* new;

	new = (l_stack*)malloc(sizeof(l_stack));
	new->i = value;
	new->next = NULL;
	return new;
}

void addl_stack(l_stack** start, int value) {
	l_stack*	new;
	l_stack*	current;

	new = newl_stack(value);
	if (*start == NULL)
	{
		*start = new;
	} else {
		
		current = *start;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
}

void	printList(l_stack *stack)
{
	while (stack)
	{
		ft_putnbr(stack->i);
		ft_putchar(' ');
		stack = stack->next;
	}
	ft_putchar('\n');
}

void freeList(l_stack *start) {
	l_stack* current;

	current = start;
	while (current != NULL) {
		l_stack* temp = current;
 		current = current->next;
		free(temp);
	}
}

int	 stack_size(l_stack *stack)
{
	int	 size;

	size = 0;
	while (stack)
	{
		size++;
		stack = stack->next;
	}
	return size;	
}

void	index_stack(l_stack *stack)
{
	l_stack	*temp_a;
	l_stack	*temp_b;
	int		index;

	temp_a = stack;
	while (temp_a)
	{
		index = 0;
		temp_b = stack;
		while (temp_b)
		{
			if(temp_b->i < temp_a->i)
				index++;
			temp_b = temp_b->next;
		}
		temp_a->index = index;
		temp_a = temp_a->next;
	}
}
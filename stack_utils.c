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

t_l_stack	*newl_stack(int value)
{
	t_l_stack	*new;

	new = (t_l_stack *)malloc(sizeof (t_l_stack));
	new->i = value;
	new->next = NULL;
	return (new);
}

void	addl_stack(t_l_stack **start, int value)
{
	t_l_stack	*new;
	t_l_stack	*current;

	new = newl_stack(value);
	if (*start == NULL)
	{
		*start = new;
	}
	else
	{
		current = *start;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
}

void	print_list(t_l_stack *stack)
{
	while (stack)
	{
		ft_putnbr(stack->i);
		ft_putchar(' ');
		stack = stack->next;
	}
	ft_putchar('\n');
}

int	stack_size(t_l_stack *stack)
{
	int	size;

	size = 0;
	while (stack)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}

void	index_stack(t_l_stack *stack)
{
	t_l_stack	*temp_a;
	t_l_stack	*temp_b;
	int			index;

	temp_a = stack;
	while (temp_a)
	{
		index = 0;
		temp_b = stack;
		while (temp_b)
		{
			if (temp_b->i < temp_a->i)
				index++;
			temp_b = temp_b->next;
		}
		temp_a->index = index;
		temp_a = temp_a->next;
	}
}

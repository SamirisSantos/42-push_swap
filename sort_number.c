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

void	smallest_number(t_stack *stack)
{
	l_stack *tmp = stack->a;
	l_stack *min_node = tmp;
	int		min_index = 0;
	int		i = 0;

	if (!tmp)
		return;
	while (tmp)
	{
		if (tmp->i < min_node->i)
		{
			min_node = tmp;
			min_index = i;
		}
		tmp = tmp->next;
		i++;
	}
	while (min_index > 0)
	{
		ra(stack);
		min_index--;
	}
	pb(stack);
}

void	sort_small(t_stack *stack)
{
		
	smallest_number(stack);

	if(stack->a->i > stack->a->next->i)
		sa(stack);
	pa(stack);

	//printList(stack->a);
}

void	sort_fiver_number(t_stack *stack)
{
	smallest_number(stack);
	smallest_number(stack);

	if (stack->b && stack->b->next && stack->b->i > stack->b->next->i)
		sb(stack);

	sort_small(stack);

	pa(stack);
	pa(stack);
	printList(stack->a);
	printList(stack->b);
}

int	largest_number(t_stack *stack)
{
    l_stack *tmp = stack->a;
    l_stack *max_node = tmp;

    if (!tmp)
        return -1;
    while (tmp)
    {
        if (tmp->i > max_node->i)
        {
            max_node = tmp;
        }
        tmp = tmp->next;
    }
	return (max_node->i);
}

void	sort_number(t_stack *stack)
{
	int largest = largest_number(stack);
	printf("Largest number is: %d\n", largest);

	

}
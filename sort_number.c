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


void	sort_number_radix(t_stack *stack, int size)
{
	int max_bits = 0;
	int i = 0;
	int j;
	l_stack *current;

	while ((size - 1) >> max_bits)
		max_bits++;

	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			current = stack->a;
			if (((current->index >> i) & 1) == 0)
				pb(stack);
			else
				ra(stack);
			j++;
		}
		while (stack->b)
			pa(stack);
		i++;
	}
}

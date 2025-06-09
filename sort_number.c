/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 12:55:55 by sade-ara          #+#    #+#             */
/*   Updated: 2025/06/09 14:29:49 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_number(t_stack *stack)
{
	int i = 0;
	int size = stack_size(stack->a);
	int max_bits = 0;
	int max_index = size - 1;
	// Quantos bits são necessários para o maior índice
	while ((max_index >> max_bits) != 0)
		max_bits++;
	while (i < max_bits)
	{
		int j = 0;
		while (j < size)
		{
			// Se o bit i do índice for 0, empurra para b, senão roda a
			if (((stack->a->index >> i) & 1) == 0)
				pb(stack);
			else
				ra(stack);
			j++;
		}
		// Volta tudo de b para a
		while (stack->b)
			pa(stack);
		i++;
	}
}
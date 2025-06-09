/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:29:50 by sade-ara          #+#    #+#             */
/*   Updated: 2025/06/09 12:41:37 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	stack;
	int		i;
	int		nb;
	
	stack.a = NULL;
	//stack.b = NULL;
	i = 1;
	if (argc < 2)
		return (1);
	duplicate_parser(argc, argv);
	while (i < argc)
	{
		nb = parser_int(argv[i]);
		addl_stack(&stack.a, nb);
		i++;
	}
	printList(stack.a);
	if(check_ordered (stack.a))
		return(0);
	else
	{
		while (stack.a && stack.a->next)
		{
			if(stack.a->i > stack.a->next->i)
			{
				sa(&stack);
			}
			stack.a = stack.a->next;
		}
	}
	//printList(stack.b);
	freeList(stack.a);
	//freeList(stack.b);
	return (0);
}

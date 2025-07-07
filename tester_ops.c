/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_ops.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 15:00:44 by sade-ara          #+#    #+#             */
/*   Updated: 2025/06/06 15:00:47 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
ARG=$(seq 1 500 | shuf); ./push_swap $ARG | wc -l
ARG=$(seq 1 100 | shuf); ./push_swap $ARG | wc -l
*/
int	main(int argc, char *argv[])
{
	t_stack	stack;
	int		i;
	int		nb;
	
	stack.a = NULL;
	stack.b = NULL;
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
	ft_putstr("Init a and b:\n");
	ft_putstr("a: ");
	printList(stack.a);
	ft_putstr("b:\n");
	ft_putstr("----------------------\n");
	ft_putstr("Exec sa:\n");
	sa(&stack);
	ft_putstr("a: ");
	printList(stack.a);
	ft_putstr("b:\n");
	ft_putstr("----------------------\n");
	ft_putstr("Exec pb pb pb:\n");
	pb(&stack);
	pb(&stack);
	pb(&stack);
	ft_putstr("a: ");
	printList(stack.a);
	ft_putstr("b: ");
	printList(stack.b);
	ft_putstr("----------------------\n");
	ft_putstr("Exec ra rb (equiv. to rr):\n");
	rr(&stack);
	ft_putstr("a: ");
	printList(stack.a);
	ft_putstr("b: ");
	printList(stack.b);
	ft_putstr("----------------------\n");
	ft_putstr("Exec rra rrb (equiv. to rrr):\n");
	rrr(&stack);
	ft_putstr("a: ");
	printList(stack.a);
	ft_putstr("b: ");
	printList(stack.b);
	ft_putstr("----------------------\n");
	ft_putstr("Exec sa:\n");
	sa(&stack);
	ft_putstr("a: ");
	printList(stack.a);
	ft_putstr("b: ");
	printList(stack.b);
	ft_putstr("----------------------\n");
	ft_putstr("Exec pa pa pa:\n");
	pa(&stack);
	pa(&stack);
	pa(&stack);
	ft_putstr("a: ");
	printList(stack.a);
	ft_putstr("b:\n");
	freeList(stack.a);
	freeList(stack.b);
	return (0);
}
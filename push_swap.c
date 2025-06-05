/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:29:50 by sade-ara          #+#    #+#             */
/*   Updated: 2025/06/05 11:45:51 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	l_stack	*a;
	l_stack	*b;
	int		i;
	int		nb;

	i = 1;
	a = NULL;
	b = NULL;
	if (argc < 2)
		return (1);
	
	while (i < argc)
	{
		nb = parser_int(argv[i]);
		addl_stack(&a, nb);
		i++;
	}

	printf("List:\n");
	printList(a);
	freeList(a);
	return (0);
}
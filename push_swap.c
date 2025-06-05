/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:29:50 by sade-ara          #+#    #+#             */
/*   Updated: 2025/06/05 15:18:43 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	l_stack	*a;
	int		i;
	int		nb;
	
	a = NULL;
	i = 1;
	if (argc < 2)
		return (1);
	duplicate_parser(argc, argv);
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

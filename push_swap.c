/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:29:50 by sade-ara          #+#    #+#             */
/*   Updated: 2025/06/11 15:13:58 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_list(t_l_stack *start)
{
	t_l_stack	*current;
	t_l_stack	*temp;

	current = start;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}

int	main(int argc, char *argv[])
{
	t_stack	stack;
	int		i;
	int		nb;

	stack.a = NULL;
	stack.b = NULL;
	i = 1;
	if (argc < 2)
		write(2, ERROR_MSG, ft_strlen(ERROR_MSG));
	duplicate_parser(argc, argv);
	while (i < argc)
	{
		nb = parser_int(argv[i]);
		addl_stack(&stack.a, nb);
		i++;
	}
	if (check_ordered(stack.a))
	{
		free_list(stack.a);
		return (0);
	}
	sort_number(&stack);
	free_list(stack.a);
	free_list(stack.b);
	return (0);
}

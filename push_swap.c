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

// void	printList(t_l_stack *stack)
// {
// 	while (stack)
// 	{
// 		ft_putnbr(stack->i);
// 		ft_putchar(' ');
// 		stack = stack->next;
// 	}
// 	ft_putchar('\n');
// }

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

void	free_split(char **res)
{
	int	j;

	j = 0;
	if (!res)
		return ;
	while (res[j])
	{
		free(res[j]);
		j++;
	}
	free(res);
}

int	main(int argc, char *argv[])
{
	t_stack	stack;

	stack.a = NULL;
	stack.b = NULL;
	if (argc < 2)
		return (0);
	parse_args(&stack, argc, argv);
	duplicate_parser(stack.a);
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

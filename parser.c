/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 09:15:50 by sade-ara          #+#    #+#             */
/*   Updated: 2025/06/09 12:14:42 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	not_number(char *s, t_stack *stack)
{
	if (*s == '\0' || *s < '0' || *s > '9')
		exit_error(stack);
	return (0);
}

int	parser_int(char *s, t_stack *stack)
{
	long	nb;
	int		sign;

	nb = 0;
	sign = 1;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	not_number(s, stack);
	while (*s)
	{
		not_number(s, stack);
		nb = nb * 10 + (*s - '0');
		if ((sign == 1 && nb > INT_MAX) || (sign == -1 && - nb < INT_MIN))
			exit_error(stack);
		s++;
	}
	return ((int)sign * nb);
}

void	duplicate_parser(t_l_stack *stack)
{
	t_l_stack	*current;
	t_l_stack	*checker;

	current = stack;
	while (current)
	{
		checker = current->next;
		while (checker)
		{
			if (current->i == checker->i)
			{
				free_list(stack);
				write(2, ERROR_MSG, ft_strlen(ERROR_MSG));
				exit(EXIT_FAILURE);
			}
			checker = checker->next;
		}
		current = current->next;
	}
}

int	check_ordered(t_l_stack *stack)
{
	while (stack && stack->next)
	{
		if (stack->i > stack->next->i)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	parse_args(t_stack *stack, int argc, char **argv)
{
	int		i;
	int		j;
	char	**split;
	int		nb;

	i = 1;
	while (i < argc)
	{
		split = ft_split(argv[i], ' ');
		if (!split)
			exit_error(stack);
		j = 0;
		while (split[j])
		{
			nb = parser_int(split[j], stack);
			addl_stack(&stack->a, nb);
			j++;
		}
		free_split(split);
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:29:54 by sade-ara          #+#    #+#             */
/*   Updated: 2025/06/06 10:51:39 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# define ERROR_MSG "Error\n"
# define MGS_OK "0K\n"
# define MGS_KO "KO\n"
# define MGS_LEN(msg) (sizeof(msg) - 1)

typedef struct stack
{
	int	i;
	struct	stack *next;
}l_stack;

typedef struct s_stack
{
	l_stack	*a;
	l_stack	*b;

}t_stack;

l_stack*	newl_stack(int value);

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int n);
void	printList(l_stack* start);
void	freeList(l_stack* start);
void	addl_stack(l_stack** start, int value);

void	swap_top(l_stack **stack);
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack);

void	pop_push_top(l_stack **src, l_stack **dest);
void	pa(t_stack *stack);
void	pb(t_stack *stack);

int		parser_int(char *str);
void	duplicate_parser(int argc, char **argv);

#endif
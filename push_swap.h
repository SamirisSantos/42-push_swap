/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:29:54 by sade-ara          #+#    #+#             */
/*   Updated: 2025/06/05 15:24:24 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# define ERROR_MSG "Error\n"
# define ERROR_LEN (sizeof(ERROR_MSG) - 1)

typedef struct stack
{
	int	i;
	int	index;
	struct	stack *next;
}l_stack;

typedef struct s_stack
{
	l_stack	*a;
	l_stack	*b;

}t_stack;

void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_putnbr(int n);

l_stack*	newl_stack(int value);
void		printList(l_stack* start);
void		freeList(l_stack* start);
void		addl_stack(l_stack** start, int value);

void		swap_top(l_stack **stack);
void		sa(t_stack *stack);
void		sb(t_stack *stack);
void		ss(t_stack *stack);

void		pop_push_top(l_stack **src, l_stack **dest);
void		pa(t_stack *stack);
void		pb(t_stack *stack);

void		shift_up(l_stack **stack);
void		ra(t_stack *stack);
void		rb(t_stack *stack);
void		rr(t_stack *stack);

void		shift_down(l_stack **stack);
void		rra (t_stack *stack);
void		rrb (t_stack *stack);
void		rrr (t_stack *stack);

int			parser_int(char *str);
int			stack_size(l_stack *stack);
int			check_ordered (l_stack *stack);
void		index_stack(l_stack *stack);
void		duplicate_parser(int argc, char **argv);

void		sort_number_radix(t_stack *stack);

#endif
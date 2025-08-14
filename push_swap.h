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
# include <stdint.h>

# define ERROR_MSG "Error\n"

typedef struct stack
{
	int				i;
	int				index;
	struct stack	*next;
}	t_l_stack;

typedef struct s_stack
{
	t_l_stack	*a;
	t_l_stack	*b;

}	t_stack;

void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_putnbr(int n);
size_t		ft_strlen(const char *c);
char		**ft_split(char const *s, char c);
void		free_split(char **res);
char		*ft_substr(char const *s, unsigned int start, size_t len);

t_l_stack	*newl_stack(int value);
void		exit_error(t_stack *stack);
void		free_list(t_l_stack *start);
void		addl_stack(t_l_stack **start, int value);

void		swap_top(t_l_stack **stack);
void		sa(t_stack *stack);
void		sb(t_stack *stack);
void		ss(t_stack *stack);

void		pop_push_top(t_l_stack **src, t_l_stack **dest);
void		pa(t_stack *stack);
void		pb(t_stack *stack);

void		shift_up(t_l_stack **stack);
void		ra(t_stack *stack);
void		rb(t_stack *stack);
void		rr(t_stack *stack);

void		shift_down(t_l_stack **stack);
void		rra(t_stack *stack);
void		rrb(t_stack *stack);
void		rrr(t_stack *stack);

int			parser_int(char *s, t_stack *stack, char **split);
int			stack_size(t_l_stack *stack);
int			check_ordered(t_l_stack *stack);
void		index_stack(t_l_stack *stack);
void		duplicate_parser(t_l_stack *stack);
void		parse_args(t_stack *stack, int argc, char **argv);

void		sort_number_radix(t_stack *stack, int size);
void		sort_number(t_stack *stack);
void		sort_five(t_stack *stack);
void		sort_four(t_stack *stack);
void		sort_three(t_stack *stack);

#endif
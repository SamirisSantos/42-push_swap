/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:29:54 by sade-ara          #+#    #+#             */
/*   Updated: 2025/06/05 14:25:41 by sade-ara         ###   ########.fr       */
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
	struct	stack *next;
}l_stack;

l_stack*	newl_stack(int value);

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	printList(l_stack* start);
void	freeList(l_stack* start);
void	addl_stack(l_stack** start, int value);

int		parser_int(char *str);
int		ft_strcmp(char *s1, char *s2);
void	duplicate_parser(int argc, char **argv);

#endif
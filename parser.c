/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 09:15:50 by sade-ara          #+#    #+#             */
/*   Updated: 2025/06/06 15:26:03 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	parser_int(char *s)
{
	long	nb;
	int		sign;

	nb = 0;
	sign = 1;
	if (*s == '-' || *s == '+')
	{	
		if(*s == '-')
			sign = -1;
		s++;
	}
	while (*s)
	{
		if (*s < '0' || *s > '9')
			exit(write(2, ERROR_MSG, MGS_LEN(ERROR_MSG)));
		nb = nb * 10 + (*s - '0');
		if ((sign == 1 && nb > INT_MAX)
			|| (sign == -1 && -nb < INT_MIN))
			exit(write(2, ERROR_MSG, MGS_LEN(ERROR_MSG)));
		s++;
	}
	return ((int)sign * nb);
}

void	duplicate_parser(int argc, char **argv)
{
	int		i;
	int		j;
	int		nb_i;
	int		nb_j;
	
	i = 1;
	while (i < argc)
	{
		nb_i = parser_int(argv[i]);
		j = i + 1;
		while (j < argc)
		{
			nb_j = parser_int(argv[j]);
			if (nb_i == nb_j)
				exit(write(2, ERROR_MSG, MGS_LEN(ERROR_MSG)));
			j++;
		}
		i++;
	}
}

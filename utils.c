/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 14:24:52 by sade-ara          #+#    #+#             */
/*   Updated: 2025/06/06 15:27:38 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

size_t	ft_strlen(const char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putnbr(int n)
{
	int		i;
	long	nb;
	char	str[12];

	i = 0;
	nb = n;
	if (nb == 0)
		ft_putchar('0');
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
	}
	while (nb > 0)
	{
		str[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	str[i] = '\0';
	while (i > 0)
	{
		i--;
		ft_putchar(str[i]);
	}
}



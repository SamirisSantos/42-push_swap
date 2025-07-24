/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:26:37 by sade-ara          #+#    #+#             */
/*   Updated: 2025/07/24 15:26:37 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_countwords(char const *s, char c)
{
	int	count;
	int	in_word;
	int	i;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static void	free_all(char **res, int j)
{
	while (--j >= 0)
		free(res[j]);
	free(res);
}

static int	split_insert_word(char **res, char const *s, char c)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			k = i;
			while (s[k] && s[k] != c)
				k++;
			res[j] = ft_substr(s, i, k - i);
			if (!res[j])
				return (free_all(res, j), 0);
			j ++;
			i = k;
			continue ;
		}
		i++;
	}
	res[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!res)
		return (NULL);
	if (!split_insert_word(res, s, c))
		return (NULL);
	return (res);
}

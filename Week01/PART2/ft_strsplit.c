/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 00:05:53 by agrele            #+#    #+#             */
/*   Updated: 2015/12/04 05:24:55 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_countwords(char const *s, char c)
{
	int	i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			while (s[i] && s[i] != c)
				i++;
			count++;
		}
	}
	return (count);
}

void	ft_showchartab(int x, int y, char **tab)
{
	int	i;
	int j;
	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			ft_putchar(tab[i][j]);
			i++;
		}
		j++;
	}
//	while (tab[i])
//	{
//		ft_putendl(tab[i]);
//		i++;
//	}
}

/*
char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		count;
	char	*tmp;
	int		i;

	tmp = ft_strdup(s);
	count = ft_countwords(s, c);
	tab = (char **)malloc(sizeof(char *) * count + 1);
	while (count > 0 && tmp[0])
	{
		i = 0;
		if (tmp[i] != c)
		{
			while (tmp[i] != c && tmp[i + 1])
				i++;
			tab[c] = ft_strsub(tmp, 0, i);
			c--;
			tmp = tmp + i;
		}
		else if (tmp[i] == c)
			tmp = tmp + 1;
	}
	return (tab);
}
*/

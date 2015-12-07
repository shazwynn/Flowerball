/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 00:05:53 by agrele            #+#    #+#             */
/*   Updated: 2015/12/07 02:32:32 by agrele           ###   ########.fr       */
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

/*
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
*/

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		count;
	char	*tmp;
	int		i;
	int		j;

	j = 0;
	tmp = ft_strdup(s);
	count = ft_countwords(s, c);
	tab = (char **)malloc(sizeof(char *) * count + 1);
	while (j < count && tmp[0])
	{
		i = 0;
		if (tmp[i] != c)
		{
			while (tmp[i] != c && tmp[i + 1]) // || tmp[(ft_strlen(tmp))] != c))
				i++;
			if (tmp[ft_strlen(tmp) - 1] != c)
				i++;
			tab[j] = ft_strnew(i);
			ft_strncpy(tab[j], tmp, i);
//	*(tab + c) = ft_strsub(tmp, 0, i);
			j++;
			tmp = tmp + i;
		}
		else if (tmp[i] == c)
			tmp = tmp + 1;
	}
	return (tab);
}

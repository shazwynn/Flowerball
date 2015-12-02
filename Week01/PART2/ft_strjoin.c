/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 17:46:11 by agrele            #+#    #+#             */
/*   Updated: 2015/12/02 18:36:17 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *join;
	int i;
	int j;

	join = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	j = 0;
	if (join)
	{
		while (s1[i])
		{
			join[i] = s1[i];
			i++;
		}
		while (s2[j])
		{
			join[i] = s2[j];
			i++;
			j++;
		}
		join[i] = '\0';
		return (join);
	}
	return (NULL);
}
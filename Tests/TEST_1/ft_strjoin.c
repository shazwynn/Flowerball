/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 17:46:11 by agrele            #+#    #+#             */
/*   Updated: 2015/12/04 04:32:51 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *join;
	int i;
	int j;

	join = NULL;
	i = 0;
	j = 0;
	if (s1 && s2)
	{
		join = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (join)
		{
			while (s1[i])
			{
				join[i] = s1[i];
				i++;
			}
			while (s2[j])
				join[i++] = s2[j++];
			join[i] = '\0';
		}
	}
	return (join);
}

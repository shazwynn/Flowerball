/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 22:20:31 by agrele            #+#    #+#             */
/*   Updated: 2015/12/04 05:41:42 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t k;

	i = 0;
	if (s2[i])
	{
		while (s1[i] && i < n)
		{
			k = 0;
			if (s1[i] == s2[k])
			{
				while (s2[k] && s1[i + k] == s2[k] && i + k <= n)
					k++;
				if (k == ft_strlen(s2))
					return ((char *)s1 + i);
			}
			i++;
		}
		return (NULL);
	}
	return ((char *)s1);
}

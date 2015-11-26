/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 22:20:31 by agrele            #+#    #+#             */
/*   Updated: 2015/11/25 22:39:56 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int i;
	int k;

	if (s2[0])
	{
		i = 0;
		while (s1[i] && n > 0)
		{
			k = 0;
			while (s1[i + k] == s2[k])
			{
				if (s2[k + 1] == '\0')
					return ((char *)s1 + i);
				k++;
			}
			i++;
			n--;
		}
		return (NULL);
	}
	return ((char*)s1);
}

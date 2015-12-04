/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:35:49 by agrele            #+#    #+#             */
/*   Updated: 2015/12/04 01:42:12 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + len);
	while (len > 0)
	{
		if (s[len - 1] == c)
			return ((char *)s + len - 1);
		len--;
	}
	return (NULL);
}

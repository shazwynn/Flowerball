/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:32:49 by agrele            #+#    #+#             */
/*   Updated: 2015/12/04 01:42:09 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* locate first occurence of character c (converted to char)
 * in string s. The terminating \0 is considered part of the string.
 * So if you search for \0 you locate it. 
 * Return pointer to the char, or NULL if it doesn't appear */

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (c == '\0')
			return ((char *)s + ft_strlen(s));
		if (s[i] == c)
			return ((char *)s + i);
		i++;	
	}
	return (NULL);
}


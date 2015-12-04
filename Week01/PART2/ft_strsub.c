/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 17:34:57 by agrele            #+#    #+#             */
/*   Updated: 2015/12/04 05:25:58 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*cpy;

	cpy = NULL;
	if (s == NULL || s[0] == '\0')
		return (NULL);
	cpy = (char *)malloc(sizeof(char) * (len + 1));
	if (cpy)
	{
		ft_strncpy(cpy, s + start, len);
		return (cpy);
	}
	else
		return (NULL);
}

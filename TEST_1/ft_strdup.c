/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:59:14 by agrele            #+#    #+#             */
/*   Updated: 2015/11/26 13:13:39 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* allocates mem for a copy of s1, does the copy, returns pointer to it */

char	*ft_strdup(const char *s1)
{
	char *dst;

	dst = (char*)malloc(sizeof(char)*(ft_strlen(s1) + 1));
	ft_strcpy(dst, s1);
	return (dst);
}

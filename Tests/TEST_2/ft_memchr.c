/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:41:15 by agrele            #+#    #+#             */
/*   Updated: 2015/12/01 14:15:17 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char car;

	i = 0;
	while (i < n)
	{
		car = ((const char *)s)[i];
		if (car == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}

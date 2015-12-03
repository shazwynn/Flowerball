/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:39:02 by agrele            #+#    #+#             */
/*   Updated: 2015/12/03 23:13:23 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (((const char *)src)[i] == (unsigned char)c)
			return(dst + i + 1);
		if (ft_isascii(((const char *)src)[i]) == FALSE)
			return(dst + i + 1);
		((char *)dst)[i] = ((const char *)src)[i];
		i++;
	}
	return(NULL);
}


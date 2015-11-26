/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:56:29 by agrele            #+#    #+#             */
/*   Updated: 2015/11/25 17:59:33 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strncpy(char *restrict dst, const char *restrict src, size_t n)
{
	int i;

	i = 0;
	while (src[i] && n > 0)
	{
		dst[i] = src[i];
		n--;
		i++;
	}
	return (dst);
}

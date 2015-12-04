/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:31:20 by agrele            #+#    #+#             */
/*   Updated: 2015/11/26 16:34:52 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* concatenate strings, safer and better than strncat
 * take full size of buffer, not just the length, and guarantee a NUL terminated result
 * ...
 * strlcat appends src to the end of dst. at most size strlen(dst) - 1 bytes */


/* WORK IN PROGRESS */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int len;

	len = ft_strlen(dst);
	(void)size;
	return (ft_strlen(src) + len);
}

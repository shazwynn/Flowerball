/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:40:34 by agrele            #+#    #+#             */
/*   Updated: 2015/12/02 15:25:01 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* Copy src to dst by using a temp
 * Return a pointer to dst
 * #Linux man */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void *tmp;
	
	tmp = (void *)malloc(sizeof(src)*len);
	ft_memcpy(tmp, src, len);
	ft_memcpy(dst, tmp, len);
	free(tmp);
	return (dst);
}

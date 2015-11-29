/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:36:19 by agrele            #+#    #+#             */
/*   Updated: 2015/11/26 18:42:54 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* how to deal with the fact that trying to add ints to a void* ?? */

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *count;

	if (len == 0)
		return (b);
	count = (unsigned char *)b;

	while (len > 0)
	{
		*count = (unsigned char)c;
		count++;
		len --;
	}
	return (b);
}

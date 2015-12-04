/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 19:13:34 by agrele            #+#    #+#             */
/*   Updated: 2015/12/04 01:19:33 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memalloc(size_t size)
{
	void	*zone;
	zone = (void *)malloc(size);
	if (zone)
	{
		ft_bzero(zone, size);
		return (zone);
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 16:46:59 by agrele            #+#    #+#             */
/*   Updated: 2015/12/04 05:24:40 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnew(size_t size)
{
	char *new;

	new = (char *)malloc(sizeof(char) * size);
	if (new)
	{
		ft_memset(new, '\0', size);
		return (new);
	}
	return (NULL);
}

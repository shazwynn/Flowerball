/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 18:09:11 by agrele            #+#    #+#             */
/*   Updated: 2015/12/04 05:43:57 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while ((unsigned char)s1[i] || (unsigned char)s2[i])
	{
		res = ((unsigned char)s1[i]) - ((unsigned char)s2[i]);
		if (res != 0)
			break ;
		i++;
	}
	return (res);
}

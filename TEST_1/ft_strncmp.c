/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 20:05:31 by agrele            #+#    #+#             */
/*   Updated: 2015/11/26 17:27:58 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (((unsigned char)s1[i] || (unsigned char)s2[i]) && n > 0)
	{
		res = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (res != 0)
			break;
		i++;
		n--;
	}
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 18:09:11 by agrele            #+#    #+#             */
/*   Updated: 2015/12/01 13:18:18 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"


/* What happens if s1 is longer than s2, or the other way around ? */

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;
	int res;
	
	i = 0;
	res = 0;
	while ((unsigned char)s1[i]  || (unsigned char)s2[i])
	{
		res = ((unsigned char)s1[i]) - ((unsigned char)s2[i]);
		if (res != 0)
			break;
		i++;
	}
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:13:49 by agrele            #+#    #+#             */
/*   Updated: 2015/11/26 16:03:53 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* concatenate strings : append a copy of s2 to end of s1, add terminating '\0'.
 * s1 must have sufficient space to hold the result 
 * source and destination should not overlap 
 * return pointer to s1 
 * initialise s1 with : "word\0         " spaces for s2*/

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int len;

	len = ft_strlen(s1);
	i = 0;
	while (s2[i])
	{
		s1[len + i] = s2[i];
		i++;
	}
	s1[i + len] = '\0';
	return (s1);
}

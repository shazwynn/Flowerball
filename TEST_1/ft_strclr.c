/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 18:00:49 by agrele            #+#    #+#             */
/*   Updated: 2015/11/26 13:26:49 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* Replace all by '\0'. If you replace only the first one, then the rest of the string's
 * characters will still be written in the memory. Try printing str+1, +2, etc... to see */

void	ft_strclr(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		s[i] = '\0';
		i++;
	}
}

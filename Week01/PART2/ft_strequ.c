/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 18:59:53 by agrele            #+#    #+#             */
/*   Updated: 2015/12/02 19:08:04 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int i;

	if (ft_strlen(s1) > ft_strlen(s2))
		i = ft_strlen(s1);
	else
		i = ft_strlen(s2);
	if (ft_strncmp(s1, s2, i) == 0)
		return (TRUE);
	return (FALSE);
}

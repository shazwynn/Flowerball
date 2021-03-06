/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 04:06:21 by agrele            #+#    #+#             */
/*   Updated: 2015/12/03 04:09:41 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\v' \
			|| c == '\r' || c == '\f')
		return (TRUE);
	return (FALSE);
}

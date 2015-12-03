/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:42:32 by agrele            #+#    #+#             */
/*   Updated: 2015/12/03 02:47:31 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_atoi(const char *str)
{
	int res;
	int i;
	int s;

	res = 0;
	i = 0;
	s = 0;
	while (str[s] == ' ' || ft_isprint(str[s]) == FALSE)
		s++;
	if (str[s] == '+' || str[s] == '-')
		i++;
	if (ft_isascii(str[s]) == FALSE)
		return (0);
	while (ft_isdigit(str[i + s]))
	{
		res = res * 10 + str[i + s] - '0';
		i++;
	}
	if (str[s] == '-')
		res = -res;
	return (res);
}

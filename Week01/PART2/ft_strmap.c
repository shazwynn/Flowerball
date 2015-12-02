/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 23:31:26 by agrele            #+#    #+#             */
/*   Updated: 2015/12/03 00:03:17 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int i;
	char	*res;

	i = 0;
	res = ft_strnew(ft_strlen(s) * sizeof(char));
	while (s[i])
	{
		res[i] = f(s[i]);
		i++;
	}
	return (res);
}

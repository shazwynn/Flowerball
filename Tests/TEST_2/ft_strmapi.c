/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 23:58:02 by agrele            #+#    #+#             */
/*   Updated: 2015/12/04 04:39:32 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	char *res;

	if (!s)
		return (NULL);
	i = 0;
	res = ft_strnew(ft_strlen(s) * sizeof(char));
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	return (res);
}

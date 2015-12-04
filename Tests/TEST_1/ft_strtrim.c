/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 18:36:26 by agrele            #+#    #+#             */
/*   Updated: 2015/12/04 05:00:01 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strtrim(char const *s)
{
	char *trim;
	int i;
	int j;
	int k;

	trim = NULL;
	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	k = ft_strlen(s) - 1;
	while (ft_isspace(s[i]))
		i++;
	while (ft_isspace(s[k]))
		k--;
	k = k - i + 1;
	if (k > 0)
	{
		trim = ft_strnew(k + 1);
		while (j < k)
			trim[j++] = s[i++];
		trim[i] = '\0';
		return (trim);
	}
	return ("\0");
}

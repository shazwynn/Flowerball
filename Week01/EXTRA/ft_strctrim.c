/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strctrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 04:05:31 by agrele            #+#    #+#             */
/*   Updated: 2015/12/03 04:38:50 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strctrim(char const *s, char c)
{
	char *trim;
	int i;
	int j;
	int k;

	(void)c;
	i = 0;
	j = 0;
	k = ft_strlen(s) - 1;
	while (ft_isspace(s[i]) || s[i] == c)
		i++;
	while (ft_isspace(s[k]) || s[i] == c)
		k--;
	k = k - i;
	if (k > 0)
	{
		trim = ft_strnew(k + 1);
		while (j < k)
			trim[j++] = s[i++];
		trim[i] = '\0';
		return (trim);
	}
	return ("");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 18:36:26 by agrele            #+#    #+#             */
/*   Updated: 2015/12/02 18:58:19 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* Redo first checking spaces and shit, then doing an strsub to copy 
 * That way can malloc the right size for char * trim 
 * Also you don't really need the ft_isspace function but consider
 * Making one in the lib for atoi and stuff */

int		ft_isspace(char c)
{
	if (c != ' ' && c != '\n' && c != '\t')
		return (FALSE);
	return (TRUE);
}

char	*ft_strtrim(char const *s)
{
	char *trim;
	int i;
	int j;

	trim = ft_strnew(ft_strlen(s) + 1);
	i = 0;
	j = 0;
	while (ft_isspace(s[i]))
		i++;
	while (ft_isspace(s[i]) == FALSE)
	{
		trim[j] = s[i];
		i++;
		j++;
	}
	trim[i] = '\0';
	return (trim);
}

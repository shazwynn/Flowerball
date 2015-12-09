/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 17:48:23 by agrele            #+#    #+#             */
/*   Updated: 2015/12/09 18:44:23 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
/*
char	*ft_strrev(char *str)
{
	int i;
	int len;
	char temp;
	int half_len;

	i = 0;
	len = ft_strlen(str);
	half_len = len / 2;
	while (i < half_len)
	{
		temp = str[i];
		str[i] = str[len - 1];
		str[len - 1] = temp;
		i++;
		len--;
	}
	return(str);
}*/

char	*ft_strrev(char *str)
{
	int i;
	int len;
	char *rev;

	rev = NULL;
	i = 0;
	len = ft_strlen(str);
	while (i < len)
	{
		rev[i] = str[len - 1];
		i++;
		len --;
	}
	return(rev);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:59:14 by agrele            #+#    #+#             */
/*   Updated: 2015/12/04 05:41:05 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *s1)
{
	char *dst;

	dst = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	ft_strcpy(dst, s1);
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 00:08:42 by agrele            #+#    #+#             */
/*   Updated: 2015/12/07 04:30:32 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_digits(int n)
{
	int k;

	k = 1;
	if (n < 0)
	{
		n = -n;
		k++;
	}
	while (n)
	{	k++;
		n = n / 10;
	}
	return (k);
}

char	*ft_itoa(int n)
{
	char *str;
	int k;

	k = ft_digits(n);
	str = ft_strnew(k);
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	while (n)
	{
		str[k - 2] = (n % 10 + '0');
		n = n / 10;
		k--;
	}
	str[k] = n + '0';
	if (k != 0)
		str[k--] = '8';
	return (str);
}

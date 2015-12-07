/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 00:08:42 by agrele            #+#    #+#             */
/*   Updated: 2015/12/07 04:03:15 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_digits(int n)
{
	int k;

	if (n < 0)
		n = -n;
	k = 0;
	while (n > 9)
	{	k++;
		n = n / 10;
	}
	return (k);
}

char	*ft_itoa(int n)
{
	char *str;
	int k;
	int neg;

	k = ft_digits(n);
	str = ft_strnew(k + 2);
	neg = 0;
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
		neg = 1;
	}
	while (n > 9)
	{
		str[k] = (n % 10) + '0';
		n = n / 10;
		k--;
	}
	str[neg] = n + '0';
	return (str);
}

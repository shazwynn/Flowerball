/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsign.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrele <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 19:28:03 by agrele            #+#    #+#             */
/*   Updated: 2015/11/25 19:30:18 by agrele           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_putsign(int n)
{
	if (n > 0)
		return ("positive");
	if (n < 0)
		return ("negative");
	if (n == 0)
		return ("zero");
	else
		return ("error");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 14:53:13 by ioleksiu          #+#    #+#             */
/*   Updated: 2016/12/28 18:37:58 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*area;
	int				len;
	unsigned int	num;

	len = 0;
	len = ft_count_int(n);
	if (!(area = (char *)malloc((len + 1))))
		return (0);
	area[len--] = '\0';
	num = ft_int_min(n);
	while (len >= 0)
	{
		area[len--] = num % 10 + 48;
		num = num / 10;
	}
	if (n < 0)
		area[0] = '-';
	return (area);
}

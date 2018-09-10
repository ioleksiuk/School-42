/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichubare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 19:15:41 by ichubare          #+#    #+#             */
/*   Updated: 2017/05/08 13:50:31 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	buf[12];
	char	*res;

	res = buf;
	res += 11;
	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n >= 0)
	{
		while (n != 0)
		{
			*--res = '0' + (n % 10);
			n /= 10;
		}
	}
	else
	{
		while (n != 0)
		{
			*--res = '0' - (n % 10);
			n /= 10;
		}
		*--res = '-';
	}
	ft_putstr_fd(res, fd);
}

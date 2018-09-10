/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 17:25:37 by ioleksiu          #+#    #+#             */
/*   Updated: 2016/12/20 20:37:04 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			c;
	unsigned int	z;

	z = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		z = -z;
	}
	if (z >= 10)
	{
		ft_putnbr_fd(z / 10, fd);
		ft_putnbr_fd(z % 10, fd);
	}
	else
	{
		c = z + 48;
		write(fd, &c, 1);
	}
}

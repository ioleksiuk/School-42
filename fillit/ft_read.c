/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 20:06:53 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/01/30 17:47:09 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_read(char *argv)
{
	int		fd;
	int		i;
	char	*str;
	char	c;

	i = 0;
	str = (char *)malloc(546);
	fd = open(argv, O_RDONLY);
	if (fd < 0)
		ft_error();
	while ((read(fd, &c, 1)) > 0)
		str[i++] = c;
	if (i > 546)
		ft_error();
	close(fd);
	return (str);
}

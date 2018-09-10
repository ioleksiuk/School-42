/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 18:33:51 by ioleksiu          #+#    #+#             */
/*   Updated: 2016/12/07 19:02:58 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dstt;
	unsigned char	*srcc;
	size_t			i;

	dstt = (unsigned char*)dst;
	srcc = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		if (srcc[i] == (unsigned char)c)
		{
			dstt[i] = srcc[i];
			return (dst + i + 1);
		}
		dstt[i] = srcc[i];
		i++;
	}
	return (NULL);
}

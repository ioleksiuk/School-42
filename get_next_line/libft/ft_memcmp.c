/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 21:14:22 by ioleksiu          #+#    #+#             */
/*   Updated: 2016/12/07 19:11:38 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while (n > i)
	{
		if (((unsigned char *)s)[i] == ((unsigned char*)s2)[i])
			i++;
		else
			return ((int)((unsigned char *)s)[i] - ((unsigned char *)s2)[i]);
	}
	return (0);
}

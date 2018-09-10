/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 19:46:28 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/01/30 17:49:56 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_strncpy(char *dst, char *src, size_t len)
{
	size_t	a;

	a = -1;
	while (++a < len && src[a])
		dst[a] = src[a];
	a = a - 1;
	while (++a < len)
		dst[a] = '\0';
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 20:11:11 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/05/08 15:51:23 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
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

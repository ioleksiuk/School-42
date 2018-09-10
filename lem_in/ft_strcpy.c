/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 19:16:01 by ioleksiu          #+#    #+#             */
/*   Updated: 2016/12/01 21:05:51 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcpy(char *dst, const char *src)
{
	char *d;
	char *s;

	d = dst;
	s = (char*)src;
	while (*s)
		*d++ = *s++;
	*d++ = '\0';
	return (dst);
}

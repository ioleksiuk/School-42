/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 17:33:29 by ioleksiu          #+#    #+#             */
/*   Updated: 2016/12/28 18:49:22 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			a;
	unsigned char	*b;
	unsigned char	*c;

	a = 0;
	b = (unsigned char*)s1;
	c = (unsigned char*)s2;
	while (a < n)
	{
		if (*b != *c)
			return (*b - *c);
		if (!*b && !*c)
			return (0);
		a++;
		b++;
		c++;
	}
	return (0);
}

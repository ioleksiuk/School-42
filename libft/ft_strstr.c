/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 20:58:55 by ioleksiu          #+#    #+#             */
/*   Updated: 2016/12/15 17:00:50 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *big, const char *little)
{
	const char	*l;
	const char	*b;

	if (!*little)
		return ((char *)big);
	while (*big)
	{
		l = little;
		b = big;
		while (*l && *b && *l == *b)
		{
			b++;
			l++;
		}
		if (!*l)
			return ((char*)big);
		big++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 15:56:07 by ioleksiu          #+#    #+#             */
/*   Updated: 2016/12/28 18:54:05 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*p;
	char			*pp;
	unsigned int	m;

	m = 0;
	if (s && f)
		if ((p = ft_strnew(ft_strlen(s))))
		{
			pp = p;
			while (s[m])
			{
				*pp++ = (*f)(m, s[m]);
				m++;
			}
			return (p);
		}
	return (NULL);
}

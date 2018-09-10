/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 20:28:12 by ioleksiu          #+#    #+#             */
/*   Updated: 2016/12/28 18:52:53 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*p;
	char	*pp;

	if (s && f)
	{
		if ((p = ft_strnew(ft_strlen(s))))
		{
			pp = p;
			while (*s)
			{
				*pp++ = (*f)(*s);
				s++;
			}
			return (p);
		}
	}
	return (NULL);
}

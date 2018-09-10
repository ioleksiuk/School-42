/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 16:13:40 by ioleksiu          #+#    #+#             */
/*   Updated: 2016/12/28 18:44:40 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*p;
	char	*pp;
	int		i;

	if (s)
	{
		i = len;
		if ((p = ft_strnew(len)))
		{
			pp = p;
			while (i > 0)
			{
				*p = *(s + start);
				p++;
				start++;
				i--;
			}
			*p = '\0';
			return (pp);
		}
	}
	return (NULL);
}

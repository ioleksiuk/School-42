/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichubare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 18:48:28 by ichubare          #+#    #+#             */
/*   Updated: 2017/05/08 13:49:51 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	i;

	if (s1 && s2)
	{
		i = 0;
		s = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
		if (s == NULL)
			return (NULL);
		while (*s1)
		{
			s[i] = *s1;
			s1++;
			i++;
		}
		while (*s2)
		{
			s[i] = *s2;
			s2++;
			i++;
		}
		s[i] = '\0';
		return (s);
	}
	return (NULL);
}

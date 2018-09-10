/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 18:47:58 by ioleksiu          #+#    #+#             */
/*   Updated: 2016/12/28 18:42:51 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char				*str;
	unsigned int		bg;
	unsigned int		end;

	if (s)
	{
		if (!*s)
			return (ft_strnew(1));
		bg = 0;
		end = ft_strlen(s) - 1;
		while ((s[bg] == ' ' || s[bg] == '\t' || s[bg] == '\n'
				|| s[bg] == '.') && bg < end + 1)
			bg++;
		while ((s[end] == ' ' || s[end] == '\t' || s[end] == '\n'
				|| s[end] == '.') && &s[end] != s)
			end--;
		if (bg >= end || bg == ft_strlen(s))
			return (ft_strnew(1));
		if ((str = ft_strnew(end - bg + 1)))
		{
			ft_strncpy(str, s + bg, end - bg + 1);
			return (str);
		}
	}
	return (NULL);
}

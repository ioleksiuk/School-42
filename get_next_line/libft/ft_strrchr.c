/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 17:02:40 by ioleksiu          #+#    #+#             */
/*   Updated: 2016/12/15 17:11:36 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char *str;
	char *lst;

	str = (char *)s;
	lst = (char *)s;
	if ((char)c == '\0')
	{
		while (*str != '\0')
			str++;
		return (str);
	}
	while (*str)
	{
		if (*str == (char)c)
			lst = str;
		str++;
	}
	if (*lst == (char)c)
		return (lst);
	return (NULL);
}

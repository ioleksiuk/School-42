/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 20:24:56 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/01/30 17:51:54 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		*ft_strndup(char *sorc, size_t n)
{
	char	*dup;

	if (!(dup = (char *)malloc(sizeof(char) * n)))
		return (NULL);
	dup = ft_strncpy(dup, sorc, n);
	dup[n] = '\0';
	return (dup);
}

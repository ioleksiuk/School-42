/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 20:36:55 by ioleksiu          #+#    #+#             */
/*   Updated: 2016/12/20 20:28:16 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*area;
	size_t	i;

	area = (void *)malloc(size);
	if (area)
	{
		i = 0;
		while (i < size)
		{
			((char*)area)[i++] = '\0';
		}
	}
	return (area);
}

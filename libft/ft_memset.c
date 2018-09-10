/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 18:30:50 by ioleksiu          #+#    #+#             */
/*   Updated: 2016/12/01 20:15:02 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *)b;
	while (i < len)
	{
		ptr[i] = (char)c;
		i++;
	}
	return (b);
}

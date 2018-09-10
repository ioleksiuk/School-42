/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cord_arr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 21:24:42 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/01/30 16:40:40 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			**cord_arr(char *s, int i, int x, int y)
{
	int		**ar;

	ar = (int**)malloc(sizeof(int*) * 4);
	while (i < 4)
		ar[i++] = (int*)malloc(sizeof(int) * 2);
	i = 0;
	while (*s)
	{
		if (*s == '#')
		{
			ar[i][0] = x;
			ar[i][1] = y;
			i++;
		}
		s++;
		x++;
		if (x == 5)
		{
			x = 0;
			y++;
		}
	}
	return (cord_arr_cut(ar));
}

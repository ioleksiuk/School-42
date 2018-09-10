/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursia.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 21:27:03 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/01/30 19:13:42 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		recursia(char **map, t_xy *xy_cord, int size)
{
	int x;
	int y;

	if (!(xy_cord))
		return (1);
	x = -1;
	y = -1;
	while (++y < size)
	{
		x = -1;
		while (++x < size)
		{
			if ((x + xy_cord->w <= size && y + xy_cord->h <= size) &&
				can_place_fig(map, xy_cord, x, y))
			{
				if (recursia(map, xy_cord->next, size))
					return (1);
				remove_fig(map, xy_cord, x, y);
			}
		}
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_the_closest_xy.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/06 14:32:25 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/05/07 18:42:02 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int			is_the_closest(t_filler *f, int x_distance, int y_distance)
{
	x_distance = (x_distance > 0) ? x_distance : (x_distance * -1);
	y_distance = (y_distance > 0) ? y_distance : (y_distance * -1);
	if (x_distance + y_distance < f->xy_distance[0] + f->xy_distance[1] ||
			(f->xy_distance[0] + f->xy_distance[1] == 0))
	{
		f->xy_distance[0] = x_distance;
		f->xy_distance[1] = y_distance;
		return (1);
	}
	return (0);
}

void		find_the_closest_xy(t_filler *f, t_list *player, t_list *other_p)
{
	t_list	*coords_to_place;
	t_list	*opponents_coords;
	int		x_distance;
	int		y_distance;

	coords_to_place = player;
	opponents_coords = other_p;
	while (coords_to_place)
	{
		while (opponents_coords)
		{
			x_distance = coords_to_place->x - opponents_coords->x;
			y_distance = coords_to_place->y - opponents_coords->y;
			opponents_coords = opponents_coords->next;
			if (is_the_closest(f, x_distance, y_distance))
			{
				f->xy_cord_send[0] = coords_to_place->x;
				f->xy_cord_send[1] = coords_to_place->y;
			}
		}
		opponents_coords = other_p;
		coords_to_place = coords_to_place->next;
	}
}

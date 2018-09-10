/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   go_to_the_border.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/06 18:42:45 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/05/08 13:55:08 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int			closest_to_the_left(t_filler *f, int x_dis, int y_dis, int y)
{
	x_dis = (x_dis > 0) ? x_dis : (x_dis * -1);
	y_dis = (y_dis > 0) ? y_dis : (y_dis * -1);
	if (f->xy_cord_send[1] < y || ((f->xy_cord_send[1] == y)
		&& (x_dis + y_dis < f->xy_distance[0] + f->xy_distance[1]))
		|| f->xy_cord_send[0] == -42)
	{
		f->xy_distance[0] = x_dis;
		f->xy_distance[1] = y_dis;
		return (1);
	}
	return (0);
}

void		go_to_the_left_border(t_filler *f, t_list *player, t_list *other_p)
{
	t_list	*coords_to_place;
	t_list	*opponents_coords;
	int		x_dis;
	int		y_dis;

	coords_to_place = player;
	opponents_coords = other_p;
	while (coords_to_place)
	{
		while (opponents_coords)
		{
			x_dis = coords_to_place->x - opponents_coords->x;
			y_dis = coords_to_place->y - opponents_coords->y;
			if (closest_to_the_left(f, x_dis, y_dis, coords_to_place->y))
			{
				f->xy_cord_send[0] = coords_to_place->x;
				f->xy_cord_send[1] = coords_to_place->y;
			}
			opponents_coords = opponents_coords->next;
		}
		opponents_coords = other_p;
		coords_to_place = coords_to_place->next;
	}
}

int			closest_to_the_right(t_filler *f, int x_dis, int y_dis, int y)
{
	x_dis = (x_dis > 0) ? x_dis : (x_dis * -1);
	y_dis = (y_dis > 0) ? y_dis : (y_dis * -1);
	if (f->xy_cord_send[1] > y || ((f->xy_cord_send[1] == y)
		&& (x_dis + y_dis < f->xy_distance[0] + f->xy_distance[1]))
		|| f->xy_cord_send[0] == -42)
	{
		f->xy_distance[0] = x_dis;
		f->xy_distance[1] = y_dis;
		return (1);
	}
	return (0);
}

void		go_to_the_right_border(t_filler *f, t_list *player, t_list *other_p)
{
	t_list	*coords_to_place;
	t_list	*opponents_coords;
	int		x_dis;
	int		y_dis;

	coords_to_place = player;
	opponents_coords = other_p;
	while (coords_to_place)
	{
		while (opponents_coords)
		{
			x_dis = coords_to_place->x - opponents_coords->x;
			y_dis = coords_to_place->y - opponents_coords->y;
			if (closest_to_the_right(f, x_dis, y_dis, coords_to_place->x))
			{
				f->xy_cord_send[0] = coords_to_place->x;
				f->xy_cord_send[1] = coords_to_place->y;
			}
			opponents_coords = opponents_coords->next;
		}
		opponents_coords = other_p;
		coords_to_place = coords_to_place->next;
	}
}

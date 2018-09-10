/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 13:26:35 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/05/08 13:56:17 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void			zero_struct(t_filler *f)
{
	f->xy_distance[0] = 0;
	f->xy_distance[1] = 0;
	f->xy_cord_send[0] = -42;
	f->xy_cord_send[1] = -42;
}

int				main(void)
{
	t_filler	*f;

	f = malloc(sizeof(t_filler));
	f->can_place_figure = 1;
	choose_players(f);
	f->i_am_up = -1;
	while (f->can_place_figure)
	{
		zero_struct(f);
		map_size(f);
		memory_allocate_map(f);
		fill_map(f);
		figure_size(f);
		memory_allocate_figure(f);
		fill_figure(f);
		find_coordinates(f);
		send_cord_xy(f);
	}
}

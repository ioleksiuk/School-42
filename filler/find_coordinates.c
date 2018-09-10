/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_coordinates.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 16:41:08 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/05/08 13:54:04 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void			find_coordinates(t_filler *f)
{
	int			x;
	int			y;
	t_list		*my_p;
	t_list		*opp_p;

	my_p = NULL;
	opp_p = NULL;
	x = -1;
	while (++x < f->size_map_x)
	{
		y = -1;
		while (++y < f->size_map_y)
		{
			if (f->map[x][y] == f->opp_p
				|| f->map[x][y] == ft_tolower(f->opp_p))
				(!opp_p) ? (opp_p = lst_create(x, y)) : lst_add(opp_p, x, y);
			if (can_place_figure(x, y, f))
				(!my_p) ? (my_p = lst_create(x, y)) : lst_add(my_p, x, y);
		}
	}
	choose_the_right_algorithm(f, my_p, opp_p);
}

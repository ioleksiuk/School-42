/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   can_place_figure.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 14:43:39 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/05/08 13:55:41 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int			can_place_figure(int x, int y, t_filler *f)
{
	int		touch;
	int		count_x;
	int		count_y;

	count_x = -1;
	touch = 0;
	while (++count_x < f->size_figure_x &&
			(f->size_figure_x + x - 1) < f->size_map_x)
	{
		count_y = -1;
		while (++count_y < f->size_figure_y &&
				(f->size_figure_y + y - 1) < f->size_map_y)
		{
			if (f->figure[count_x][count_y] == '*' &&
				(f->map[count_x + x][count_y + y] == f->my_p
				|| f->map[count_x + x][count_y + y] == tolower(f->my_p)))
				touch++;
			if (f->map[count_x + x][count_y + y] == f->opp_p)
				return (0);
		}
	}
	return ((touch) != 1 ? 0 : 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   border_touched.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/06 18:25:13 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/05/07 18:31:49 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int			left_border_touched(t_filler *f)
{
	int		x;

	x = -1;
	while (++x < f->size_map_x)
		if (f->map[x][0] == f->my_p || f->map[x][0] == ft_tolower(f->my_p))
			return (1);
	return (0);
}

int			right_border_touched(t_filler *f)
{
	int		x;

	x = -1;
	while (++x < f->size_map_x)
		if (f->map[x][f->size_map_y - 1] == f->my_p ||
				f->map[x][f->size_figure_y - 1] == ft_tolower(f->opp_p))
			return (1);
	return (0);
}

void		are_borders_touched(t_filler *f)
{
	f->right_border_touched = (right_border_touched(f)) ? 1 : 0;
	f->left_border_touched = (left_border_touched(f)) ? 1 : 0;
}

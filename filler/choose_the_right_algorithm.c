/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_the_right_algorithm.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/06 19:33:59 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/05/07 19:28:55 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	choose_the_right_algorithm(t_filler *f, t_list *player, t_list *other_p)
{
	are_borders_touched(f);
	if (f->i_am_up && !f->right_border_touched && f->size_map_x > 50)
		go_to_the_left_border(f, player, other_p);
	else if (f->i_am_up && !f->left_border_touched && f->size_map_x > 50)
		go_to_the_right_border(f, player, other_p);
	else if (!f->i_am_up && !f->right_border_touched && f->size_map_x > 50)
		go_to_the_left_border(f, player, other_p);
	else if (!f->i_am_up && !f->left_border_touched && f->size_map_x > 50)
		go_to_the_right_border(f, player, other_p);
	else
		find_the_closest_xy(f, player, other_p);
}

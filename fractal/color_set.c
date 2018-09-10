/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <ioleksiu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 17:16:50 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/08/27 17:16:54 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	color_set(t_d *d, int n)
{
	(d->f->num == 1 || d->f->num == 3) ? color_m_j(d, n) : color_s(d, n);
	add_pixel(d->f, d->x, d->y_s, d->color);
}

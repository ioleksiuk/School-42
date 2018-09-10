/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ship_pixel_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <ioleksiu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 17:21:23 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/08/27 17:21:27 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void		s_pix_check(t_d *inf, t_constants *z, t_constants *c)
{
	double	init_r;
	int		n;

	n = -1;
	while (++n < inf->f->iter)
	{
		init_r = fabs(z->real);
		z->real = v_dva(z->real) - fabs(v_dva(z->img)) + c->real;
		z->img = 2 * fabs(init_r * z->img) + c->img;
		if ((v_dva(z->real) + v_dva(z->img)) > 4.0)
			break ;
	}
	color_set(inf, n);
}

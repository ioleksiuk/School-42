/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia_pixel_check.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <ioleksiu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 17:19:06 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/08/27 17:19:08 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void		j_pix_check(t_d *inf, t_constants *z, t_constants *c)
{
	int	n;

	n = -1;
	while (++n < inf->f->iter)
	{
		z->real = c->real;
		z->img = c->img;
		c->real = v_dva(z->real) - v_dva(z->img);
		c->real += inf->f->constants.real;
		c->img = 2.0 * z->real * z->img + inf->f->constants.img;
		if ((v_dva(c->real) + v_dva(c->img)) > 4)
			break ;
	}
	color_set(inf, n);
}

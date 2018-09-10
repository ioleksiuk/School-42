/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_fractal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <ioleksiu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 17:17:26 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/08/27 17:17:29 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void			*draw_fractal(void *args)
{
	t_constants	c;
	t_constants	z;
	t_d			*inf;
	int			x;

	inf = (t_d*)args;
	while (inf->y_s != inf->y_e)
	{
		x = -1;
		while (++x < WIDTH)
		{
			inf->x = x;
			z.real = 0;
			z.img = 0;
			c.real = 1.5 * (x - WIDTH / 2) / (0.5 * inf->f->zoom * WIDTH);
			c.real += inf->f->x_move;
			c.img = (inf->y_s - HEIGHT / 2) / (0.5 * inf->f->zoom * HEIGHT);
			c.img += inf->f->y_move;
			(inf->fract_num == 1) ? m_pix_check(inf, &z, &c) : 0;
			(inf->fract_num == 2) ? s_pix_check(inf, &z, &c) : 0;
			(inf->fract_num == 3) ? j_pix_check(inf, &z, &c) : 0;
		}
		inf->y_s++;
	}
	pthread_exit(0);
}

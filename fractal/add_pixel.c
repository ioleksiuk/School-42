/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_pixel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <ioleksiu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 17:14:25 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/08/27 17:14:32 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void		add_pixel(t_fract *fract, int x, int y, int color)
{
	char		*data;
	int			d;

	if (!((x > 0 && x < WIDTH) && (y > 0 && y < HEIGHT)))
		return ;
	data = mlx_get_data_addr(fract->img, &d, &d, &d);
	d = 4 * y * WIDTH + 4 * x;
	data[d + 2] = (int)(((color >> 16) & 0xFF));
	data[d + 1] = (int)(((color >> 8) & 0xFF));
	data[d + 0] = (int)((color & 0xFF));
}

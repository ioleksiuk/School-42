/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <ioleksiu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 17:20:45 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/08/27 17:20:49 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		move_mouse(int x, int y, t_fract *fract)
{
	if (fract->inter == 1)
	{
		fract->constants.real = 1.5 * (x - WIDTH / 2);
		fract->constants.real /= (0.5 * WIDTH * fract->zoom);
		fract->constants.real += fract->x_move;
		fract->constants.img = (y - HEIGHT / 2) / (0.5 * HEIGHT * fract->zoom);
		fract->constants.img += fract->y_move;
	}
	return (0);
}

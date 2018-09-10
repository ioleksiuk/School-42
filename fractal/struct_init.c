/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <ioleksiu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 17:21:57 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/08/27 17:22:00 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void		struct_init(t_fract *fract)
{
	fract->zoom = 0.8;
	fract->x_move = -0.5;
	fract->y_move = 0.0;
	if (fract->num == 3)
	{
		fract->x_move = 0.0;
		fract->y_move = 0.0;
		fract->constants.real = -0.8;
		fract->constants.img = 0.156;
		fract->inter = 0;
	}
	if (fract->num == 2)
	{
		fract->x_move = -0.4;
		fract->y_move = -0.6;
	}
}

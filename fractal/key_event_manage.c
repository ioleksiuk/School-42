/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_event_manage.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <ioleksiu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 17:19:33 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/08/27 17:19:37 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		key_event_manage(int key_code, t_fract *fract)
{
	printf("%d\n", key_code);
	if (key_code == ESC)
	{
		write(1, "Exit\n", 5);
		exit(0);
	}
	if (key_code == RIGHT_ARROW)
		fract->x_move += 0.5 / fract->zoom;
	if (key_code == LEFT_ARROW)
		fract->x_move -= 0.1 / fract->zoom;
	if (key_code == STAR)
		fract->inter = (fract->inter == 0) ? 1 : 0;
	if (key_code == DOWN_ARROW)
		fract->y_move -= 0.5 / fract->zoom;
	if (key_code == UP_ARROW)
		fract->y_move += 0.5 / fract->zoom;
	event(key_code, fract);
	return (0);
}

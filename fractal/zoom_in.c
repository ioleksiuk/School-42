/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom_in.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <ioleksiu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 17:32:26 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/08/27 17:32:28 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	zoom_in(int x, int y, t_fract *fract)
{
	fract->zoom *= 2;
	fract->x_move += 1.5 * (x - WIDTH / 2) / (0.5 * fract->zoom * WIDTH);
	fract->y_move += (y - HEIGHT / 2) / (0.5 * fract->zoom * HEIGHT);
}

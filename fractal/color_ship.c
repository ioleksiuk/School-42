/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_ship.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <ioleksiu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 17:16:34 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/08/27 17:16:37 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	color_s(t_d *d, int n)
{
	if (n == d->f->iter)
		d->color = (0x00FFF176 * n / (d->f->iter));
	if (n < d->f->iter / 2)
		d->color = (0x00FBC02D * n / (d->f->iter * 5));
	else
		d->color = 0x004DD0E1;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_mandel_julia.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <ioleksiu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 17:15:58 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/08/27 17:16:02 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	color_m_j(t_d *d, int n)
{
	if (n == d->f->iter)
		d->color = (0x0080CBC4 * n / (d->f->iter));
	if (n < d->f->iter / 2)
		d->color = (0x0000838f * n / (d->f->iter * 2));
	else
		d->color = 0x0080D8FF;
}

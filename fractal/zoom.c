/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <ioleksiu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 17:22:36 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/08/27 17:22:38 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	mouse_zoom(int key_code, int x, int y, t_fract *fract)
{
	printf("%d\n", key_code);
	(key_code == 1 || key_code == 5) ? zoom_in(x, y, fract) : zoom_out(fract);
	return (0);
}

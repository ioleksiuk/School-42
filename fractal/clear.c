/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <ioleksiu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 17:15:01 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/08/27 17:15:06 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void		clear_img(t_fract *fract)
{
	char	*data;
	int		d;

	data = mlx_get_data_addr(fract->img, &d, &d, &d);
	ft_bzero(data, WIDTH * HEIGHT * 4);
}

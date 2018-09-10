/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threads.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <ioleksiu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 17:21:40 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/08/27 17:21:42 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int				threads(t_fract *fract)
{
	pthread_t	threads[THREADS];
	t_d			inf[THREADS];
	int			i;

	clear_img(fract);
	i = -1;
	while (++i < THREADS)
	{
		inf[i].f = fract;
		inf[i].y_s = HEIGHT / THREADS * i;
		inf[i].y_e = HEIGHT / THREADS * (i + 1);
		inf[i].fract_num = fract->num;
		pthread_create(&(threads[i]), NULL, draw_fractal, &(inf[i]));
	}
	i = -1;
	while (++i < THREADS)
		pthread_join(threads[i], NULL);
	mlx_put_image_to_window(fract->mlx, fract->win, fract->img, 0, 0);
	return (0);
}

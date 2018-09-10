/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractal.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <ioleksiu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 17:18:25 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/08/27 17:18:29 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void		fractol(t_fract *fract)
{
	static char	*str[] = {"Mandelbrot", "Ships", "Julia"};

	print_controls();
	printf("%s\n", str[fract->num - 1]);
	fract->iter = 120;
	fract->mlx = mlx_init();
	fract->win = mlx_new_window(fract->mlx, WIDTH, HEIGHT, str[fract->num - 1]);
	fract->img = mlx_new_image(fract->mlx, WIDTH, HEIGHT);
	struct_init(fract);
	mlx_loop_hook(fract->mlx, threads, fract);
	mlx_hook(fract->win, 6, 64, move_mouse, fract);
	mlx_mouse_hook(fract->win, mouse_zoom, fract);
	mlx_hook(fract->win, 2, 3, key_event_manage, fract);
	mlx_loop(fract->mlx);
}

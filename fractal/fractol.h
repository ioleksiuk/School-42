/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <ioleksiu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 19:36:38 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/08/27 19:36:42 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H
# include "mlx.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <pthread.h>
# define THREADS 32
# define WIDTH 1280
# define HEIGHT 1024
# define LEFT_ARROW 123
# define RIGHT_ARROW 124
# define UP_ARROW 125
# define DOWN_ARROW 126
# define ESC 53
# define STAR 67
# define ITER_PLUS 69
# define ITER_MINUS 78
# define RESET 76

typedef struct		s_constants
{
	double			img;
	double			real;
}					t_constants;

typedef	struct		s_fract
{
	int				num;
	void			*mlx;
	void			*win;
	void			*img;
	int				color;
	double			x_move;
	double			y_move;
	double			zoom;
	double			r_init;
	int				iter;
	int				inter;
	t_constants		constants;
}					t_fract;

typedef struct		s_d
{
	int				color;
	t_fract			*f;
	int				y_s;
	int				y_e;
	int				x;
	int				fract_num;
}					t_d;

void				ft_bzero(void *s, size_t n);
void				m_pix_check(t_d *inf, t_constants *z, t_constants *c);
void				color_set(t_d *d, int n);
void				fractol(t_fract *fract);
void				struct_init(t_fract *fract);
void				print_menu();
void				clear_img(t_fract *fract);
void				add_pixel(t_fract *fract, int x, int y, int color);
void				j_pix_check(t_d *inf, t_constants *z, t_constants *c);
void				*draw_fractal(void *args);
void				s_pix_check(t_d *inf, t_constants *z, t_constants *c);
void				event(int key_code, t_fract *fract);
int					key_event_manage(int key_code, t_fract *fract);
int					move_mouse(int x, int y, t_fract *fract);
int					mouse_zoom(int key_code, int x, int y, t_fract *fract);
int					threads(t_fract *fract);
double				v_dva(double a);
void				print_controls(void);
void				zoom_out(t_fract *fract);
void				zoom_in(int x, int y, t_fract *fract);
void				color_s(t_d *d, int n);
void				color_m_j(t_d *d, int n);
void				color_set(t_d *d, int n);
#endif

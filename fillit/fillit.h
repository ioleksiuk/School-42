/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 20:25:34 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/01/30 19:32:36 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef	struct	s_xy
{
	int			x[4];
	int			y[4];
	int			w;
	int			h;
	char		c;
	struct s_xy *next;
}				t_xy;

int				min_four(int a, int b, int c, int d);
int				max_four(int a, int b, int c, int d);
char			*ft_strncpy(char *dst, char *src, size_t len);
char			*ft_strndup(char *sorc, size_t n);
t_xy			*ft_xy_list_create(int n);
int				**cord_arr_cut(int **ar);
int				**cord_arr(char *s, int i, int x, int y);
t_xy			*ft_xy_list_fill(t_xy *head, int **ar, char ch);
t_xy			*ft_figure_cord_fill(char *s, int n);
char			**create_map(int n);
void			print_map(char **map, int size);
int				can_place_fig(char **map, t_xy *a, int x, int y);
void			remove_fig(char **map, t_xy *a, int x, int y);
int				recursia(char **map, t_xy *xy_cord, int size);
int				fill_main(char *s, int f_num);
char			*ft_read(char *argv);
size_t			ft_strlen(const char *s);
void			ft_error(void);
int				ft_figure_nb(int l);
int				ft_count_nl(char *s, int l, int f);
int				ft_nl_location(char *s, int f);
int				ft_count_dot_and_hash(char *s, int l);
int				ft_figure_ck(char *s, int i, int h);
int				ft_figure_ck1(char *s);
void			ft_check_all(char *s);
#endif

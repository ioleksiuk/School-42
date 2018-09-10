/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 13:24:25 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/05/08 15:53:19 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# define BUFF_SIZE 1
# include <fcntl.h>
# include <ctype.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct	s_filler
{
	char		my_p;
	char		opp_p;
	int			size_map_x;
	int			size_map_y;
	int			size_figure_x;
	int			size_figure_y;
	char		**map;
	char		**figure;
	int			xy_distance[2];
	int			xy_cord_send[2];
	int			can_place_figure;
	int			left_border_touched;
	int			right_border_touched;
	int			i_am_up;
}				t_filler;

typedef struct	s_list
{
	int				x;
	int				y;
	struct s_list	*next;
}				t_list;

typedef struct	s_get
{
	char			*rest;
	int				fd;
	struct s_get	*next;
}				t_get;

void			figure_size(t_filler *f);
void			memory_allocate_figure(t_filler *f);
void			fill_figure(t_filler *f);

void			map_size(t_filler *f);
void			memory_allocate_map(t_filler *f);
void			fill_map(t_filler *f);

void			find_coordinates(t_filler *f);
int				can_place_figure(int x, int y, t_filler *f);
void			send_cord_xy(t_filler *f);
int				is_the_closest(t_filler *f, int x_distance, int y_distance);
void			find_the_closest_xy(t_filler *f, t_list *player,
									t_list *other_p);

void			choose_players(t_filler *f);

int				get_next_line(const int fd, char **line);
int				ft_one(int i, char **save, char **line, int a);

char			*ft_strchr(const char *s, int c);
size_t			ft_strlen(const char *str);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strdup(const char *s1);
void			ft_putnbr_fd(int n, int fd);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putchar_fd(char s, int fd);
int				ft_atoi(const char *str);
void			ft_bzero(void *s, size_t n);
int				ft_isdigit(int c);
char			*ft_strstr(const char *big, const char *little);
int				ft_tolower(int c);
char			*ft_strnew(size_t size);
char			*ft_strncpy(char *dst, const char *src, size_t len);

t_list			*lst_create(int x, int y);
void			lst_add(t_list *f, int x, int y);

void			choose_the_right_algorithm(t_filler *f, t_list *player,
				t_list *other_p);
int				right_border_touched(t_filler *f);
int				left_border_touched(t_filler *f);
void			are_borders_touched(t_filler *f);
void			go_to_the_right_border(t_filler *f, t_list *player,
										t_list *other_p);
int				closest_to_the_right(t_filler *f, int x_distance,
											int y_distance, int y);
void			go_to_the_left_border(t_filler *f, t_list *player,
										t_list *other_p);
int				closest_to_the_left(t_filler *f, int x_distance,
											int y_distance, int y);
#endif

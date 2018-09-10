/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   figure.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 13:10:44 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/05/07 18:28:23 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void		figure_size(t_filler *f)
{
	char	*line;
	int		i;

	i = 6;
	get_next_line(0, &line);
	f->size_figure_x = ft_atoi(&line[i]);
	while (line[i] != ' ')
		i++;
	f->size_figure_y = ft_atoi(&line[++i]);
	free(line);
}

void		memory_allocate_figure(t_filler *f)
{
	int		i;

	i = 0;
	f->figure = (char**)malloc(sizeof(char*) * f->size_figure_x);
	while (i < f->size_figure_x)
	{
		f->figure[i] = (char *)malloc(sizeof(char) * f->size_figure_y + 1);
		ft_bzero(f->figure[i], (size_t)(f->size_figure_y + 1));
		i++;
	}
}

void		fill_figure(t_filler *f)
{
	int		i;
	int		x;
	int		y;
	char	*line;

	i = 0;
	x = 0;
	y = 0;
	get_next_line(0, &line);
	while (x < f->size_figure_x)
	{
		while (y < f->size_figure_y)
		{
			f->figure[x][y] = line[i];
			i++;
			y++;
		}
		x++;
		y = 0;
		i = 0;
		free(line);
		if (x < f->size_figure_x)
			get_next_line(0, &line);
	}
}

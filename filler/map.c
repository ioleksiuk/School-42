/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 13:13:56 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/05/08 13:56:51 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void		map_size(t_filler *f)
{
	char	*line;
	int		i;

	i = 8;
	get_next_line(0, &line);
	if (ft_strstr(line, "Plateau"))
	{
		f->size_map_x = ft_atoi(&line[i]);
		while (ft_isdigit(line[i]))
			i++;
		f->size_map_y = ft_atoi(&line[++i]);
		free(line);
	}
}

void		memory_allocate_map(t_filler *f)
{
	int		count;

	count = -1;
	f->map = (char**)malloc(f->size_map_x * sizeof(char *));
	while (++count < f->size_map_x)
	{
		f->map[count] = (char *)malloc((f->size_map_y + 1) * sizeof(char));
		ft_bzero(f->map[count], (size_t)f->size_map_y + 1);
	}
}

void		fill_map(t_filler *f)
{
	int		x;
	int		y;
	char	*line;
	int		i;

	x = 0;
	i = 4;
	get_next_line(0, &line);
	(line[0] == 'P' || line[0] == ' ') ? free(line) : 0;
	(line[0] == 'P' || line[0] == ' ') ? get_next_line(0, &line) : 0;
	while (x < f->size_map_x)
	{
		y = -1;
		while (++y < f->size_map_y)
		{
			f->map[x][y] = line[i];
			(f->map[x][y] == f->my_p && f->i_am_up == -1) ? f->i_am_up = 1 : 0;
			(f->map[x][y] == f->opp_p && f->i_am_up == -1) ? f->i_am_up = 0 : 0;
			i++;
		}
		i = 4;
		(++x < f->size_map_x) ? get_next_line(0, &line) : 0;
	}
}

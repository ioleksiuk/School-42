/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 21:27:21 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/01/30 17:10:05 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		fill_main(char *s, int f_num)
{
	t_xy	*xy_cord;
	char	**map;
	int		size;

	size = 2;
	map = create_map(size);
	xy_cord = ft_figure_cord_fill(s, f_num);
	while (recursia(map, xy_cord, size) == 0 && size < 16)
		map = create_map(++size);
	print_map((char **)map, size);
	return (1);
}

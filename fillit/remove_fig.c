/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_fig.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 21:26:42 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/01/30 18:20:13 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	remove_fig(char **map, t_xy *a, int x, int y)
{
	map[x + (a->x[0])][y + (a->y[0])] = '.';
	map[x + (a->x[1])][y + (a->y[1])] = '.';
	map[x + (a->x[2])][y + (a->y[2])] = '.';
	map[x + (a->x[3])][y + (a->y[3])] = '.';
}
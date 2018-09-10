/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 21:25:41 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/01/30 17:06:51 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**create_map(int n)
{
	char	**map;
	int		j;
	int		i;

	i = 0;
	j = -1;
	map = (char**)malloc(sizeof(char*) * n);
	while (i < n)
		map[i++] = (char*)malloc(sizeof(char) * n + 1);
	i = 0;
	while (++j < n)
	{
		while (i < n)
			map[j][i++] = '.';
		map[j][i] = '\0';
		i = 0;
	}
	return (map);
}

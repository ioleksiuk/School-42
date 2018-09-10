/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xy_list_fill.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 21:25:04 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/01/30 18:01:19 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_xy		*ft_xy_list_fill(t_xy *head, int **ar, char ch)
{
	t_xy	*a;
	int		i;

	i = 0;
	a = head;
	while (i < 4)
	{
		a->x[i] = ar[i][0];
		a->y[i] = ar[i][1];
		i++;
	}
	a->w = max_four(a->x[0], a->x[1], a->x[2], a->x[3]) + 1;
	a->h = max_four(a->y[0], a->y[1], a->y[2], a->y[3]) + 1;
	a->c = ch;
	a = a->next;
	return (a);
}

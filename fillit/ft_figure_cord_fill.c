/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_figure_cord_fill.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 21:25:21 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/01/30 17:40:11 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_xy		*ft_figure_cord_fill(char *s, int n)
{
	char	*p;
	int		i;
	t_xy	*head;
	char	c;
	t_xy	*a;

	c = 'A';
	head = ft_xy_list_create(n);
	a = head;
	i = 20;
	while (n--)
	{
		p = ft_strndup(s, i);
		a = ft_xy_list_fill(a, cord_arr(p, 0, 0, 0), c);
		s += 21;
		c++;
	}
	return (head);
}

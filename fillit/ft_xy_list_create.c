/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xy_list_create.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 21:24:08 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/01/30 17:57:57 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_xy		*ft_xy_list_create(int n)
{
	t_xy	*a;
	t_xy	*head;
	t_xy	*next_list;
	int		i;

	i = 0;
	a = (t_xy*)malloc(sizeof(t_xy));
	head = a;
	while (--n)
	{
		next_list = (t_xy *)malloc(sizeof(t_xy));
		a->next = next_list;
		a = next_list;
	}
	a->next = (NULL);
	return (head);
}

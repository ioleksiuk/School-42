/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 19:41:42 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/05/07 18:50:24 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

t_list		*lst_create(int x, int y)
{
	t_list	*f;

	f = (t_list *)malloc(sizeof(t_list));
	f->x = x;
	f->y = y;
	f->next = (NULL);
	return (f);
}

void		lst_add(t_list *f, int x, int y)
{
	t_list	*temp;
	t_list	*list;

	temp = f;
	while (temp->next)
		temp = temp->next;
	list = (t_list *)malloc(sizeof(t_list));
	temp->next = list;
	list->x = x;
	list->y = y;
	list->next = (NULL);
}

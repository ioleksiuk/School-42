/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 15:18:00 by ioleksiu          #+#    #+#             */
/*   Updated: 2016/12/28 18:55:48 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*a;
	t_list	*b;
	t_list	*c;

	if (!lst)
		return (0);
	a = f(lst);
	b = a;
	c = a;
	while (lst->next)
	{
		lst = lst->next;
		a = f(lst);
		c->next = a;
		c = a;
	}
	return (b);
}

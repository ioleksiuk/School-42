/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 15:15:44 by ioleksiu          #+#    #+#             */
/*   Updated: 2016/12/27 20:28:06 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*a;
	t_list	*b;

	a = *alst;
	while (a)
	{
		b = a->next;
		del(a->content, a->content_size);
		free(a);
		a = b;
	}
	*alst = 0;
}

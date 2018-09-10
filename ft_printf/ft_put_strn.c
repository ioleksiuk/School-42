/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_strn.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 16:20:24 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/03/24 13:44:22 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_put_strn(char *s, int i, t_pf *a)
{
	while (i-- > 0)
	{
		write(1, s, 1);
		a->i++;
		s++;
	}
}

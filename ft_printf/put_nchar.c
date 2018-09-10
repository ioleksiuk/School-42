/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nchar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 16:12:28 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/03/24 13:56:10 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			put_nchar(char c, int i, t_pf *a)
{
	while (i > 0)
	{
		write(1, &c, 1);
		i--;
		a->i++;
	}
}
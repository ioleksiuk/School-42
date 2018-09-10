/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_cord.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 13:21:55 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/05/08 17:46:28 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	send_cord_xy(t_filler *f)
{
	f->can_place_figure = (f->xy_cord_send[0] == -42) ? 0 : 1;
	f->xy_cord_send[0] = (f->xy_cord_send[0] == -42) ? 0 : (f->xy_cord_send[0]);
	f->xy_cord_send[1] = (f->xy_cord_send[1] == -42) ? 0 : (f->xy_cord_send[1]);
	ft_putnbr_fd(f->xy_cord_send[0], 1);
	write(1, " ", 1);
	ft_putnbr_fd(f->xy_cord_send[1], 1);
	write(1, "\n", 1);
}

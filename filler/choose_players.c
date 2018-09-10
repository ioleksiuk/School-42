/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_players.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 13:22:55 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/05/07 18:34:47 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void		choose_players(t_filler *f)
{
	char	*line;

	f->my_p = 'O';
	f->opp_p = 'O';
	get_next_line(0, &line);
	line[10] == '1' ? (f->opp_p = 'X') : 0;
	line[10] == '1' ? 0 : (f->my_p = 'X');
	free(line);
}

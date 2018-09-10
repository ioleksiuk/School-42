/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 20:28:43 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/01/30 17:12:09 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_check_all(char *s)
{
	int	i;
	int	f;

	i = ft_strlen(s);
	f = ft_figure_nb(i);
	ft_count_nl(s, i, f);
	ft_nl_location(s, f);
	ft_count_dot_and_hash(s, i);
	ft_figure_ck1(s);
	fill_main(s, f);
}

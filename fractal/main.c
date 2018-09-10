/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <ioleksiu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 17:20:12 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/08/27 17:20:15 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int			main(int argc, char **argv)
{
	t_fract		fract;

	if (argc != 2)
		print_menu();
	fract.num = argv[1][0] - '0';
	(fract.num >= 0 && fract.num <= 3) ? fractol(&fract) : print_menu();
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_controls.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <ioleksiu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 17:18:06 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/08/27 17:18:10 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	print_controls(void)
{
	write(1, " --------------------------------------------- \n", 48);
	write(1, "|                CONTROL KEYS                 |\n", 48);
	write(1, " --------------------------------------------- \n", 48);
	write(1, "|Go to the left  |   LEFT ARROW               |\n", 48);
	write(1, "|Go to the right |   RIGHT ARROW              |\n", 48);
	write(1, "|Go up           |   UP ARROW                 |\n", 48);
	write(1, "|Go down         |   DOWN ARROW               |\n", 48);
	write(1, " --------------------------------------------- \n", 48);
	write(1, "|Zoom in         |   Right click or scroll in |\n", 48);
	write(1, "|Zoom out        |   Right click or scroll out|\n", 48);
	write(1, "|Back to default |   K                        |\n", 48);
	write(1, "|Stop moving     |   *                        |\n", 48);
	write(1, "|Change iter     |   + -                      |\n", 48);
	write(1, " --------------------------------------------- \n", 48);
}

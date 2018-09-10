/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <ioleksiu@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 17:17:46 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/08/27 17:17:48 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	event(int key_code, t_fract *fract)
{
	if (key_code == ITER_PLUS && fract->iter <= 400)
		fract->iter += 5;
	if (key_code == ITER_MINUS && fract->iter > 50)
		fract->iter -= 5;
	if (key_code == RESET)
		struct_init(fract);
}

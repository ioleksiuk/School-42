/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 17:41:07 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/02/15 15:56:18 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1
# include <stdlib.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <sys/uio.h>
# include "libft/libft.h"
# include <stdio.h>

typedef struct		s_get
{
	char			*rest;
	int				fd;
	struct s_get	*next;
}					t_get;

int					get_next_line(const int fd, char **line);
#endif

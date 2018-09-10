#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/29 18:17:32 by ioleksiu          #+#    #+#              #
#    Updated: 2017/01/29 18:18:45 by ioleksiu         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = fillit

FLAG = -Wall -Wextra -Werror

DEL = rm -rf

HDR = fillit.h

OBJ = $(SRC:.c=.o)

PATH = /bin/

SRC =	can_place_fig.c \
		ft_count_nl.c \
		ft_strlen.c \
		min_four.c \
		cord_arr.c \
		ft_error.c \
		ft_strncpy.c \
		cord_arr_cut.c \
		ft_figure_ck.c \
		ft_strndup.c \
		print_map.c \
		create_map.c \
		ft_figure_ck1.c \
		ft_xy_list_create.c \
		ft_read.c \
		fill_main.c \
		ft_figure_cord_fill.c \
		ft_xy_list_fill.c \
		recursia.c \
		ft_check_all.c \
		ft_figure_nb.c \
		main.c \
		remove_fig.c \
		ft_count_dot_and_hash.c \
		ft_nl_location.c \
		max_four.c \

all: $(NAME)

$(NAME) : $(OBJ)
		gcc $(FLAG) $(OBJ) -o $(NAME)

%.o: %.c
		gcc $(FLAG) -c $<

clean:
		$(DEL) $(OBJ)

fclean: clean
		$(DEL) $(NAME)

re: fclean all

rmsh:
		rm *~
		rm \#*
		rm *.out
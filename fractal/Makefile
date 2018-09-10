# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ioleksiu <ioleksiu@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/27 17:53:19 by ioleksiu          #+#    #+#              #
#    Updated: 2017/08/27 17:53:22 by ioleksiu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol

FLAG = -Wall -Wextra

DEL = rm -rf

HDR = fractol.h

PATH = /bin/

SRC =	add_pixel.c \
		color_set.c \
		event.c \
		julia_pixel_check.c \
		mandel_pixel_check.c \
		print_menu.c \
		threads.c \
		zoom_in.c \
		clear.c \
		color_ship.c \
		fractal.c \
		key_event_manage.c \
		mouse_move.c \
		ship_pixel_check.c \
		v_kvadrate.c \
		zoom_out.c \
		color_mandel_julia.c \
		draw_fractal.c \
		ft_bzero.c \
		main.c \
		print_controls.c \
		struct_init.c \
		zoom.c


OBJ =	add_pixel.o \
		color_set.o \
		event.o \
		julia_pixel_check.o \
		mandel_pixel_check.o \
		print_menu.o \
		threads.o \
		zoom_in.o \
		clear.o \
		color_ship.o \
		fractal.o \
		key_event_manage.o \
		mouse_move.o \
		ship_pixel_check.o \
		v_kvadrate.o \
		zoom_out.o \
		color_mandel_julia.o \
		draw_fractal.o \
		ft_bzero.o \
		main.o \
		print_controls.o \
		struct_init.o \
		zoom.o

all: $(NAME)

$(NAME) : $(OBJ)
		gcc $(FLAG) $(OBJ) -o $(NAME) -lmlx -framework OpenGl -framework AppKit

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

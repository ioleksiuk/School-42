#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/08 12:24:27 by ioleksiu          #+#    #+#              #
#    Updated: 2017/05/08 15:49:48 by ioleksiu         ###   ########.fr        #
#                                                                              #
#******************************************************************************#
NAME = filler

FLAG = -Wall -Wextra -Werror

DEL = rm -rf

HDR = fillit.h

PATH = /bin/

SRC =	main.c \
		figure.c \
		choose_players.c \
		map.c \
		send_cord.c \
		can_place_figure.c \
		find_coordinates.c \
		linked_list.c \
		find_the_closest_xy.c \
		border_touched.c \
		go_to_the_border.c \
		choose_the_right_algorithm.c \
		ft_atoi.c \
		ft_strstr.c \
		ft_bzero.c \
		ft_isdigit.c \
		ft_tolower.c \
		get_next_line.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strlen.c \
		ft_putnbr_fd.c \
		ft_strsub.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_strnew.c \
		ft_strncpy.c \

OBJ =	main.o \
		figure.o \
		choose_players.o \
		map.o \
		send_cord.o \
		can_place_figure.o \
		find_coordinates.o \
		linked_list.o \
		find_the_closest_xy.o \
		border_touched.o \
		go_to_the_border.o \
		choose_the_right_algorithm.o \
		ft_atoi.o \
		ft_strstr.o \
		ft_bzero.o \
		ft_isdigit.o \
		ft_tolower.o \
		get_next_line.o \
		ft_strchr.o \
		ft_strdup.o \
		ft_strjoin.o \
		ft_strlen.o \
		ft_putnbr_fd.o \
		ft_strsub.o \
		ft_putchar_fd.o \
		ft_putstr_fd.o \
		ft_strnew.o \
		ft_strncpy.o \

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
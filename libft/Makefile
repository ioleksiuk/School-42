#******************************************************************************#
#																			  #
#														:::	 ::::::::	#
#	Makefile										  :+:	 :+:   :+:	#
#													 +:+ +:+		 +:+	  #
#	By: ioleksiu <marvin@42.fr>					+#+  +:+	   +#+		 #
#												 +#+#+#+#+#+   +#+			#
#	Created: 2016/11/30 20:31:48 by ioleksiu		  #+#	#+#			  #
#	Updated: 2016/12/29 14:33:26 by ioleksiu		 ###   ########.fr		#
#																			  #
#******************************************************************************#

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

INCLUDES = -I libft.h

SRC	= ft_atoi.c \
		ft_itoa.c \
		ft_memcpy.c \
		ft_putstr_fd.c \
		ft_striteri.c \
		ft_strrchr.c \
		ft_bzero.c \
		ft_lstadd.c \
		ft_memdel.c \
		ft_strcat.c \
		ft_strjoin.c \
		ft_strsplit.c \
		ft_count_int.c \
		ft_lstdel.c \
		ft_memmove.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strstr.c \
		ft_counts.c \
		ft_lstdelone.c \
		ft_memset.c \
		ft_strclr.c \
		ft_strlen.c \
		ft_strsub.c \
		ft_countw.c \
		ft_lstiter.c \
		ft_putchar.c \
		ft_strcmp.c \
		ft_strmap.c \
		ft_strtrim.c \
		ft_int_min.c \
		ft_lstmap.c \
		ft_putchar_fd.c \
		ft_strcpy.c \
		ft_strmapi.c \
		ft_sub.c \
		ft_isalnum.c \
		ft_lstnew.c \
		ft_putendl.c \
		ft_strdel.c \
		ft_strncat.c \
		ft_tolower.c \
		ft_isalpha.c \
		ft_memalloc.c \
		ft_putendl_fd.c \
		ft_strdup.c \
		ft_strncmp.c \
		ft_toupper.c \
		ft_isascii.c \
		ft_memccpy.c \
		ft_putnbr.c \
		ft_strnequ.c \
		ft_strncpy.c \
		ft_isdigit.c \
		ft_memchr.c \
		ft_putnbr_fd.c \
		ft_strequ.c \
		ft_strnew.c \
		ft_isprint.c \
		ft_memcmp.c \
		ft_putstr.c \
		ft_striter.c \
		ft_strnstr.c

OBJECTS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $< $(INCLUDES)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: clean  all

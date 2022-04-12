# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zachaaib <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/06 18:50:02 by zachaaib          #+#    #+#              #
#    Updated: 2021/11/16 14:40:57 by zachaaib         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a


FILES =  	ft_atoi.c ft_isalpha.c ft_memchr.c ft_memset.c \
			ft_strlen.c  ft_tolower.c ft_bzero.c ft_isascii.c \
			ft_memcmp.c	ft_strchr.c ft_strncmp.c ft_toupper.c \
			ft_calloc.c	ft_isdigit.c ft_memcpy.c ft_strlcat.c \
			ft_strnstr.c ft_isalnum.c ft_isprint.c ft_memmove.c \
			ft_strlcpy.c ft_strrchr.c  ft_strdup.c \
			ft_strjoin.c ft_strtrim.c ft_substr.c ft_itoa.c \
			ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
			ft_split.c ft_putendl_fd.c ft_putnbr_fd.c \

LIB = libft.h

OBJ = $(FILES:.c=.o)

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ) $(LIB)
	ar rc $(NAME) $(OBJ)

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

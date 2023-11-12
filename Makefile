# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbabayan <mbabayan@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 14:55:23 by mbabayan          #+#    #+#              #
#    Updated: 2023/11/12 14:09:44 by mbabayan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_calloc.c ft_memset.c ft_memmove.c ft_isalnum.c ft_isdigit.c ft_isalpha.c \
		ft_isascii.c ft_isprint.c ft_memcpy.c ft_tolower.c ft_toupper.c \
		ft_strlen.c ft_atoi.c ft_bzero.c ft_strlcpy.c ft_strncmp.c ft_strchr.c\
		ft_memchr.c ft_strrchr.c ft_strlcat.c\

BON_SRC = #Add bonus files heree

OBJ = ${SRCS:.c=.o}

BON_OBJ = ${BON_SRC:.c=.o}

CC = gcc

NAME = libft.a

CFLAGS = -Wall -Werror -Wextra

$(NAME) : $(OBJ)
	ar -rcs $@ $(OBJ)

re: fclean all

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

.PHONY:			all clean fclean re bonus
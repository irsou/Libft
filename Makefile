# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isousa-s <isousa-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/28 17:41:08 by isousa-s          #+#    #+#              #
#    Updated: 2024/12/06 11:46:25 by isousa-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = 	ft_isalpha.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c \
ft_strlen.c \
ft_memset.c \
ft_bzero.c \
ft_memcpy.c \
ft_memmove.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_toupper.c \
ft_tolower.c \
ft_strchr.c \
ft_strrchr.c \
ft_strncmp.c \
ft_memchr.c \
ft_memcmp.c \
# ft_strnstr.c \
# ft_atoi.c \
# ft_calloc.c \
# ft_strdup.c

SRC_BONUS = ft_lstnew.c

OBJ = ${SRC:.c=.o}
OBJ_BONUS = ${SRC_BONUS:.c=.o}

CC = cc
FLAGS = -Wall -Werror -Wextra
RM = rm -f
AR = ar rcs


%.o: %.c libft.h
	${CC} ${FLAGS} -c $< -o $@

all:$(NAME)

$(NAME):${OBJ}
	${AR} ${NAME} ${OBJ}

bonus:${NAME} ${OBJ_BONUS}
	${AR} ${NAME} ${OBJ} ${OBJ_BONUS}

clean:
	${RM} ${OBJ} ${OBJ_BONUS}

fclean: 
	${RM} ${NAME} ${OBJ} ${OBJ_BONUS}

re: fclean all

.PHONY:	all clean fclean re bonus

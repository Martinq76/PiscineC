# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mqueguin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/22 12:05:21 by mqueguin          #+#    #+#              #
#    Updated: 2020/08/23 11:41:05 by mqueguin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

all: ${NAME}

SRCS = srcs/ft_putchar.c srcs/ft_atoi.c srcs/ft_putnbr.c srcs/main.c srcs/op.c srcs/ft_do_op.c srcs/ft_strcmp.c

OBJS = ${SRCS:.c=.o}

CC = gcc

CFLAGS = -Wall -Wextra -Werror

${NAME}:
	${CC} ${CFLAGS} -I includes -o  ${NAME} ${SRCS}

fclean:
	rm -f ${NAME}

clean:
	rm -f *.o

re: fclean all

.PHONY :	all re fclean clean

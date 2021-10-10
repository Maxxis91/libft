# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmelissi <gmelissi@student.21-schoo>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/10 20:19:54 by gmelissi          #+#    #+#              #
#    Updated: 2021/10/10 20:22:49 by gmelissi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

CC = gcc
PATH_SRC = ./
SRC = ft*.c
SRCS = $(addprefix $(PATH_SRC), $(SRC))
PATH_HEAD = ./
HEAD = libft.h
HEADS = $(addprefix $(PATH_HEAD), $(HEAD))
FLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)
	NAME = libft.a

all: $(NAME)

.c.o:
		$(CC) $(FLAGS) -include $(HEADS) -c $(SRCS)

$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

clean: 
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)
			
re: fclean all

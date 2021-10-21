# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmelissi <gmelissi@student.21-schoo>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/10 20:19:54 by gmelissi          #+#    #+#              #
#    Updated: 2021/10/20 20:12:27 by gmelissi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean bonus re

CC = gcc
FLAGS = -Wall -Wextra -Werror
PATH_HEAD = ./
HEAD = libft.h
HEADS = $(addprefix $(PATH_HEAD), $(HEAD))
PATH_SRC = ./
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
BSRC = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
SRCS = $(addprefix $(PATH_SRC), $(SRC))
BSRCS = $(addprefix $(PATH_SRC), $(BSRC))
OBJS = $(SRCS:.c=.o)
BOBJS = $(BSRCS:.c=.o)
NAME = libft.a

all: $(NAME)

.c.o:
		${CC} ${FLAGS} -c $< -o ${<:.c=.o}

$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

bonus:
		@make OBJS=$(BOBJS) all
		ar rc $(NAME) $(BOBJS)
		ranlib $(NAME)

#bonus: $(OBJS) $(BOBJS)
#		ar rc $(NAME) $(OBJS) $(BOBJS)
#		ranlib $(NAME)  

clean: 
		rm -f $(OBJS) ${BOBJS}

fclean: clean
		rm -f $(NAME)

re: fclean all

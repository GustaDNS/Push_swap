# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/01 14:40:36 by gudaniel          #+#    #+#              #
#    Updated: 2024/05/03 10:27:36 by gudaniel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c  printf_func1.c printf_func2.c \


OBJS = $(SRC:.c=.o)

COMPILER = cc
FLAGS = -Wall -Werror -Wextra


all: $(NAME)

$(NAME): 
		$(COMPILER) $(FLAGS) -c $(SRC)
		ar rc $(NAME) $(OBJS)
#		$(COMPILER) $(FLAGS) ft_printf.c $(NAME) -g

re:		fclean $(NAME)

clean: 
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)
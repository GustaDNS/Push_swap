# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 17:27:27 by gudaniel          #+#    #+#              #
#    Updated: 2024/04/27 15:59:18 by gudaniel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -rf
NAME = libft.a

LIB_SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c\
		   ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c\
	  	   ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c\
	  	   ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
		   ft_printf/ft_printf.c ft_printf/printf_func1.c ft_printf/printf_func2.c\
LIB_OBJS =  $(LIB_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(LIB_OBJS)
	ar rc $(NAME) $(LIB_OBJS)

clean:
	$(RM) $(LIB_OBJS)
fclean: clean
	$(RM) $(NAME)
re: clean all

PHONY: all clean fclean re
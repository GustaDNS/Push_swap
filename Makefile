NAME = push_swap

SRC =source/handle.c source/push_swap.c source/stack.c source/operations/push.c \
		source/operations/reverse_rotate.c source/operations/swap.c \
		source/operations/rotate.c source/radix.c source/utils.c\

OBJS = $(SRC:.c=.o)

LIBFT = ./libft/libft.a

PRINT = ./ft_printf/libftprintf.a

FLAGS = -Werror -Wall -Wextra

COMPILER = cc

all: LIB $(NAME)

$(NAME): $(SRC)
	$(COMPILER) $(FLAGS) $(SRC) $(LIBFT) $(PRINT) -o $(NAME) -g

LIB:
	$(MAKE) -C ./libft
	$(MAKE) -C ./ft_printf

re: fclean all

clean:
	$(MAKE) clean -C ./libft
	$(MAKE) clean -C ./ft_printf

fclean:
	$(MAKE) fclean -C ./libft
	$(MAKE) fclean -C ./ft_printf
	rm -f push_swap

download:
	@wget https://cdn.intra.42.fr/document/document/25705/checker_linux && chmod 777 checker_linux

visualizer:
	git clone https://github.com/o-reo/push_swap_visualizer.git && \
	cd push_swap_visualizer && \
	mkdir build && \
	cd build && \
	cmake .. && \
	make && \
	./bin/visualizer














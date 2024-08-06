NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror -g -Iheaders/

RM = rm -rf

LIBFT = ./libft/libft.a

SRCS = 	source/handle.c source/push_swap.c source/stack.c source/operations/push.c \
		source/operations/reverse_rotate.c source/operations/swap.c

all: $(NAME)

$(NAME): $(SRCS) libs
	@$(CC) $(CFLAGS) $(SRCS) $(LIBFT) -o $(NAME)

libs:
	@$(MAKE) -C ./libft

clean:
	@$(MAKE) clean -C ./libft
	
fclean:
	@$(MAKE) -C ./libft fclean
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
re: fclean all
NAME = libftprintf.a

SRC = ft_printf.c handle_char.c handle_string.c handle_int.c handle_unsigned.c handle_hex.c handle_pointer.c handle_percent.c ft_itoa_unsigned.c ft_itoa_base.c ft_itoa_ptr.c
OBJ = $(SRC:.c=.o)

LIBFT_DIR = libft/
LIBFT = $(LIBFT_DIR)libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C $(LIBFT_DIR)
	cp $(LIBFT) .
	ar rcs $(NAME) $(OBJ) $(LIBFT_DIR)*.o

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJ)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME) libft.a

re: fclean all

.PHONY: all clean fclean re

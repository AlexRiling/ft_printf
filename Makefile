# Name of the output library
NAME = libftprintf.a

# Source files for ft_printf
SRC = ft_printf.c handle_char.c handle_string.c handle_int.c handle_unsigned.c handle_hex.c handle_pointer.c handle_percent.c ft_itoa_unsigned.c ft_itoa_base.c ft_itoa_ptr.c
OBJ = $(SRC:.c=.o)

# Directory and target for libft
LIBFT_DIR = libft/
LIBFT = $(LIBFT_DIR)libft.a

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Rule to build the final library
all: $(NAME)

# Rule to build the ft_printf library
$(NAME): $(OBJ)
	$(MAKE) -C $(LIBFT_DIR)
	cp $(LIBFT) .
	ar rcs $(NAME) $(OBJ) $(LIBFT_DIR)*.o

# Clean object files
clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJ)

# Full clean including the library
fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME) libft.a

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re

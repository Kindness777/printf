CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_strchr.c print_char.c print_digit.c print_uns.c print_hex.c print_bhex.c print_str.c print_pointer.c

OBJS = $(SRCS:.c=.o)

HEADERS = ft_printf.h

LIBFT = ../home/maxleroy/Documents/printf/libftprintf.a

NAME = libftprintf.a

LIBC = ar -rc

all: $(NAME)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)
%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

# Phony targets
.PHONY: all clean fclean re

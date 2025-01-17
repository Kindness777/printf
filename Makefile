CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_strchr.c print_char.c print_digit.c print_uns.c print_hex.c print_Bhex.c print_str.c print_pointer.c

OBJS = $(SRCS:.c=.o)

HEADERS = ft_printf.h

NAME = ft_printf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

# Phony targets
.PHONY: all clean fclean re
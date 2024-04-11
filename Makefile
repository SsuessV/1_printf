NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_hexa.c\
ft_hexaupp.c\
ft_print_ptr_hexa.c\
ft_printf.c\
ft_putchar.c\
ft_putnbr.c\
ft_putstr.c\
ft_strchr.c\
ft_strlen.c

OBJ = $(SRC:.c=.o)

HEADERS = printf.h

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJS) $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

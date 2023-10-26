NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_.c\




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

.PHONY: all bonus clean fclean re

NAME = push_swap

SRC = push_swap.c input_checks.c instructions_a.c instructions_b.c instructions_a_b.c big_sorts.c movements.c sort.c utils.c stack.c

OBJ = $(SRC:.c=.o)

RM = rm -f
CC = gcc
CFLAGS = -Wall -Wextra -Werror
HEADER = push_swap.h

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean flean re

##
## EPITECH PROJECT, 2020
## sorting
## File description:
## Makefile
##

NAME	= push_swap

CC	= gcc

RM	= rm -f *~ include/*~ src/*~

SRCS = $(shell find */*.c)

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
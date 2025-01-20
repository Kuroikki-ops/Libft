NAME = test_program

SRC = main.c ft_strlen.c ft_strchr.c ft_strrchr.c

OBJS = $(SRC:.c=.o)

HEAD = libft.h

RM = rm -f

CC = gcc
CLIB = ar rcs
CFLAGS = -Wall -Wextra -Werror -I.

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
%.o: %.c $(HEAD)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJS)
	
fclean: clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY: all clean fclean re

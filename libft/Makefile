# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diespino <diespino@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/15 17:16:03 by diespino          #+#    #+#              #
#    Updated: 2025/01/20 18:55:11 by diespino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c\
      ft_isdigit.c\
      ft_isalnum.c\
      ft_isascii.c\
      ft_isprint.c\
      ft_strlen.c\
      ft_memset.c\
      ft_bzero.c\
      ft_memcpy.c\
      ft_memmove.c\
      ft_strlcpy.c\
      ft_strlcat.c\
      ft_toupper.c\
      ft_tolower.c\
      ft_strchr.c\
      ft_strrchr.c

OBJS = $(SRC:.c=.o)

HEAD = libft.h

RM = rm -f

CC = gcc
CLIB = ar rcs
CFLAGS = -Wall -Wextra -Werror -I.

$(NAME): $(OBJS) Makefile libft.h
	$(CLIB) -o $(NAME) $(OBJS)

%.o: %.c $(HEAD)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJS)
	
fclean: clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY: all clean fclean re

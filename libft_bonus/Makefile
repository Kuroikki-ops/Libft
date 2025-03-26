# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diespino <diespino@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/15 17:16:03 by diespino          #+#    #+#              #
#    Updated: 2025/02/03 15:37:51 by diespino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

# MANDATORY
SRC_PATH 	= src
SRC 		=$(SRC_PATH)/ft_isalpha.c\
		$(SRC_PATH)/ft_isdigit.c\
		$(SRC_PATH)/ft_isalnum.c\
		$(SRC_PATH)/ft_isascii.c\
		$(SRC_PATH)/ft_isprint.c\
		$(SRC_PATH)/ft_strlen.c\
		$(SRC_PATH)/ft_memset.c\
		$(SRC_PATH)/ft_bzero.c\
		$(SRC_PATH)/ft_memcpy.c\
		$(SRC_PATH)/ft_memmove.c\
		$(SRC_PATH)/ft_strlcpy.c\
		$(SRC_PATH)/ft_strlcat.c\
		$(SRC_PATH)/ft_toupper.c\
		$(SRC_PATH)/ft_tolower.c\
		$(SRC_PATH)/ft_strchr.c\
		$(SRC_PATH)/ft_strrchr.c\
		$(SRC_PATH)/ft_strncmp.c\
		$(SRC_PATH)/ft_memchr.c\
		$(SRC_PATH)/ft_memcmp.c\
		$(SRC_PATH)/ft_strnstr.c\
		$(SRC_PATH)/ft_atoi.c\
		$(SRC_PATH)/ft_calloc.c\
		$(SRC_PATH)/ft_strdup.c\
		$(SRC_PATH)/ft_substr.c\
		$(SRC_PATH)/ft_strjoin.c\
		$(SRC_PATH)/ft_strtrim.c\
		$(SRC_PATH)/ft_split.c\
		$(SRC_PATH)/ft_itoa.c\
		$(SRC_PATH)/ft_strmapi.c\
		$(SRC_PATH)/ft_striteri.c\
		$(SRC_PATH)/ft_putchar_fd.c\
		$(SRC_PATH)/ft_putstr_fd.c\
		$(SRC_PATH)/ft_putendl_fd.c\
		$(SRC_PATH)/ft_putnbr_fd.c

# BONUS
BONUS_PATH 	= src_bonus
SRC_BONUS	= $(BONUS_PATH)/ft_lstnew.c\
		$(BONUS_PATH)/ft_lstadd_front.c\
		$(BONUS_PATH)/ft_lstsize.c\
		$(BONUS_PATH)/ft_lstlast.c\
		$(BONUS_PATH)/ft_lstadd_back.c\
		$(BONUS_PATH)/ft_lstdelone.c\
		$(BONUS_PATH)/ft_lstclear.c\
		$(BONUS_PATH)/ft_lstiter.c\
		$(BONUS_PATH)/ft_lstmap.c

# CONVERSIONES
OBJS 		= $(SRC:.c=.o)
DEPS 		= $(SRC:.c=.d)

OBJS_BONUS	= $(SRC_BONUS:.c=.o)
DEPS_BONUS	= $(SRC_BONUS:.c=.d)

# INCLUDES
HEAD = libft.h

# REMOVE
RM = rm -f

# FLAGS
CC = gcc
CLIB = ar rcs -v
CFLAGS = -Wall -Wextra -Werror -I.

# RULES
all: $(NAME)

$(NAME): $(OBJS) libft.h
	$(CLIB) $(NAME) $(OBJS)

%.o: %.c $(HEAD) Makefile
	$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

-include $(DEPS)

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)
	$(RM) $(DEPS) $(DEPS_BONUS)
	
fclean: clean
	$(RM) $(NAME)
	
re: fclean all

bonus: $(OBJS) $(OBJS_BONUS)
	$(CLIB) $(NAME) $(OBJS) $(OBJS_BONUS)

.PHONY: all clean fclean re bonus

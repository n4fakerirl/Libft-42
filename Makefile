# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/27 22:30:15 by ocviller          #+#    #+#              #
#    Updated: 2025/05/04 16:36:15 by ocviller         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_strncmp.c ft_strrchr.c ft_calloc.c ft_memchr.c ft_memcmp.c \
		ft_strnstr.c ft_strjoin.c ft_putchar_fd.c ft_strtrim.c ft_strlen.c \
		ft_substr.c ft_strdup.c ft_itoa.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_strmapi.c ft_striteri.c

OBJ = ft_atoi.o ft_strncmp.o ft_strrchr.o ft_calloc.o ft_memchr.o ft_memcmp.o \
		ft_strnstr.o ft_strjoin.o ft_putchar_fd.o ft_strtrim.o ft_strlen.o \
		ft_substr.o ft_strdup.o ft_itoa.o ft_putstr_fd.o ft_putendl_fd.o \
		ft_putnbr_fd.o ft_strmapi.o ft_striteri.o
		
CC = cc
CFLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "$(NAME) created!"

$(OBJ): $(SRC)
	@$(CC) $(CFLAGS) -c $(SRC)

clean:
	@$(RM) $(OBJ)
	@echo "Objects removed."

fclean: clean
	@$(RM) $(NAME)
	@echo "$(NAME) removed."

re: fclean all

.PHONY: all clean fclean re
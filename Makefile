# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/27 22:30:15 by ocviller          #+#    #+#              #
#    Updated: 2025/05/05 21:56:00 by ocviller         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_strncmp.c ft_strrchr.c ft_calloc.c ft_memchr.c ft_memcmp.c \
		ft_strnstr.c ft_strjoin.c ft_putchar_fd.c ft_strtrim.c ft_strlen.c \
		ft_substr.c ft_strdup.c ft_itoa.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_strmapi.c ft_striteri.c ft_isalpha.c ft_isdigit.c \
		ft_isalnum.c ft_isascii.c ft_isprint.c ft_memset.c ft_bzero.c ft_memcpy.c \
		ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_split.c

OBJ = ft_atoi.o ft_strncmp.o ft_strrchr.o ft_calloc.o ft_memchr.o ft_memcmp.o \
		ft_strnstr.o ft_strjoin.o ft_putchar_fd.o ft_strtrim.o ft_strlen.o \
		ft_substr.o ft_strdup.o ft_itoa.o ft_putstr_fd.o ft_putendl_fd.o \
		ft_putnbr_fd.o ft_strmapi.o ft_striteri.o ft_isalpha.o ft_isdigit.o \
		ft_isalnum.o ft_isascii.o ft_isprint.o ft_memset.o ft_bzero.o ft_memcpy.o \
		ft_memmove.o ft_strlcpy.o ft_strlcat.o ft_toupper.o ft_tolower.o ft_strchr.o \
		ft_split.o
		
SRC_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ_BONUS = ft_lstnew.o ft_lstadd_front.o ft_lstsize.o ft_lstlast.o ft_lstadd_back.o \
			ft_lstdelone.o ft_lstclear.o ft_lstiter.o ft_lstmap.o

CC = cc
CFLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "$(NAME) created!"

$(OBJ): $(SRC)
	@$(CC) $(CFLAGS) -c $(SRC)

bonus : $(OBJ_BONUS)
	@ar rcs $(NAME) $(OBJ_BONUS)
	@echo "$(NAME) with bonus created!"

$(OBJ_BONUS) : $(SRC_BONUS)
	@$(CC) $(CFLAGS) -c $(SRC_BONUS)

clean:
	@$(RM) $(OBJ) $(OBJ_BONUS)
	@echo "Objects removed."

fclean: clean
	@$(RM) $(NAME)
	@echo "$(NAME) removed."

re: fclean all

.PHONY: all clean fclean re
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/13 11:30:03 by mahadad           #+#    #+#              #
#    Updated: 2021/10/13 13:27:43 by mahadad          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_DIR = srcs/
OBJ_DIR = obj/

CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRCS = \
srcs/ft_atoi.c \
srcs/ft_bzero.c \
srcs/ft_calloc.c \
srcs/ft_isalnum.c \
srcs/ft_isalpha.c \
srcs/ft_isascii.c \
srcs/ft_isdigit.c \
srcs/ft_isprint.c \
srcs/ft_itoa.c \
srcs/ft_lstadd_back.c \
srcs/ft_lstadd_front.c \
srcs/ft_lstclear.c \
srcs/ft_lstdelone.c \
srcs/ft_lstiter.c \
srcs/ft_lstlast.c \
srcs/ft_lstmap.c \
srcs/ft_lstnew.c \
srcs/ft_lstsize.c \
srcs/ft_memchr.c \
srcs/ft_memcmp.c \
srcs/ft_memcpy.c \
srcs/ft_memmove.c \
srcs/ft_memset.c \
srcs/ft_putchar_fd.c \
srcs/ft_putendl_fd.c \
srcs/ft_putnbr_fd.c \
srcs/ft_putstr_fd.c \
srcs/ft_split.c \
srcs/ft_strchr.c \
srcs/ft_strdup.c \
srcs/ft_striteri.c \
srcs/ft_strjoin.c \
srcs/ft_strlcat.c \
srcs/ft_strlcpy.c \
srcs/ft_strlen.c \
srcs/ft_strmapi.c \
srcs/ft_strncmp.c \
srcs/ft_strnstr.c \
srcs/ft_strrchr.c \
srcs/ft_strtrim.c \
srcs/ft_substr.c \
srcs/ft_tolower.c \
srcs/ft_toupper.c 

SRC = $(notdir $(SRCS))
OBJ = $(SRC:.c=.o)
OBJS = $(addprefix $(OBJ_DIR), $(OBJ))

all: $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(FLAGS) -I include -c $< -o $@

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

fclean: clean
	rm -f $(NAME)

clean:
	rm -rf $(OBJS)

re: fclean all

.PHONY: all, clean, fclean, re
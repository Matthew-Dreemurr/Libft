# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/13 11:30:03 by mahadad           #+#    #+#              #
#    Updated: 2021/10/18 15:14:52 by mahadad          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_DIR = srcs/
OBJ_DIR = obj/

CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRC = \
ft_atoi.c \
ft_bzero.c \
ft_calloc.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_itoa.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_putchar_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_putstr_fd.c \
ft_split.c \
ft_strchr.c \
ft_strdup.c \
ft_striteri.c \
ft_strjoin.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strmapi.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strrchr.c \
ft_strtrim.c \
ft_substr.c \
ft_tolower.c \
ft_toupper.c 

SRC_B = \
ft_lstnew.c \
ft_lstdelone.c \
ft_lstclear.c \
ft_lstadd_front.c \
ft_lstadd_back.c \
ft_lstsize.c \
ft_lstiter.c \
ft_lstmap.c \
ft_lstlast.c

OBJS = $(SRC:.c=.o)
OBJS_B = $(SRC_B:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -I include -c $< -o $@

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(OBJS_B)
	ar -rcs $(NAME) $(OBJS) $(OBJS_B)

fclean: clean
	rm -f $(NAME)

clean:
	rm -rf $(OBJS) $(OBJS_B)

re: fclean all

.PHONY: all, clean, fclean, re, bonus
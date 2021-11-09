# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/13 11:30:03 by mahadad           #+#    #+#              #
#    Updated: 2021/11/09 16:46:49 by mahadad          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# _.-=+=-._.-=+=-._[ Var ]_.-=+=-._.-=+=-._ #
NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror $(DEBUG)

ifeq ($(SANI), 1)
CFLAGS += -fsanitize=address
D = 1
endif
ifeq ($(D), 1)
CFLAGS += -g3
endif

# _.-=+=-._.-=+=-._[ Source & Bin ]_.-=+=-._.-=+=-._ #
SRC_DIR = src/
OBJ_DIR = obj/


# _.-=[ src/ctype ]=-._ #
SRCS = \
src/ctype/ft_isalpha.c \
src/ctype/ft_isdigit.c \
src/ctype/ft_isalnum.c \
src/ctype/ft_isascii.c \
src/ctype/ft_isprint.c \
src/ctype/ft_toupper.c \
src/ctype/ft_tolower.c

# _.-=[ src/string ]=-._ #
SRCS += \
src/string/ft_bzero.c \
src/string/ft_memchr.c \
src/string/ft_memcmp.c \
src/string/ft_memcpy.c \
src/string/ft_memmove.c \
src/string/ft_memset.c \
src/string/ft_split.c \
src/string/ft_strchr.c \
src/string/ft_strdup.c \
src/string/ft_striteri.c \
src/string/ft_strjoin.c \
src/string/ft_strlcat.c \
src/string/ft_strlcpy.c \
src/string/ft_strlen.c \
src/string/ft_strmapi.c \
src/string/ft_strncmp.c \
src/string/ft_strnstr.c \
src/string/ft_strrchr.c \
src/string/ft_strtrim.c \
src/string/ft_substr.c \
src/string/len_chrchr.c \
src/string/strjoin_and_free.c \
src/string/strlen_protect.c

# _.-=[ src/stdlib ]=-._ #
SRCS += \
src/stdlib/ft_calloc.c \
src/stdlib/ft_atoi.c

# _.-=[ src/libft ]=-._ #
SRCS += \
src/libft/ft_substr.c \
src/libft/ft_strjoin.c \
src/libft/ft_strtrim.c \
src/libft/ft_split.c \
src/libft/ft_itoa.c \
src/libft/ft_strmapi.c \
src/libft/ft_striteri.c \
src/libft/ft_putchar_fd.c \
src/libft/ft_putnbr_fd.c \
src/libft/ft_putstr_fd.c \
src/libft/ft_putendl_fd.c

# _.-=[ src/custom ]=-._ #
SRCS += \
src/custom/ft_putchar.c \
src/custom/ft_putstr.c \
src/custom/putstr_ret_int.c \
src/custom/putchar_ret_int.c

# _.-=[ src/linklst ]=-._ #
SRCS += \
src/linklst/ft_lstnew.c \
src/linklst/ft_lstadd_front.c \
src/linklst/ft_lstsize.c \
src/linklst/ft_lstlast.c \
src/linklst/ft_lstadd_back.c \
src/linklst/ft_lstdelone.c \
src/linklst/ft_lstclear.c \
src/linklst/ft_lstiter.c \
src/linklst/ft_lstmap.c

# _.-=[ src/vector ]=-._ #
SRCS += \
src/vector/vect_new.c \
src/vector/vect_push.c \
src/vector/vect_resize.c 

SRC		= $(notdir $(SRCS))
OBJ		= $(SRC:.c=.o)
OBJS	= $(addprefix $(OBJ_DIR), $(OBJ))

VPATH	= $(SRC_DIR) $(OBJ_DIR) $(shell find $(SRC_DIR) -type d)

all: $(NAME)
	@printf "\033[32;1m[== $(NAME) Created ! ==]\033[32;0m\n"

$(OBJ_DIR)%.o: %.c
	@$(CC) $(CFLAGS) -I includes -c $< -o $@
	@printf "\033[32;1m$@\033[32;0m\n"

$(OBJ_DIR):
	@if [[ $D = "1" ]]; then printf "\033[31;1m[/!\\ DEBUG ENABLE /!\\]\033[32;0m\n"; fi
	mkdir -p $(OBJ_DIR)
	@printf "\033[32;1m[Create $(OBJ_DIR)]\033[32;0m\n"

$(NAME): $(OBJ_DIR) $(OBJS)
	@ar -rcs $(NAME) $(OBJS)
	@printf "\033[32;1m[== Linked OK ==]\033[32;0m\n"

clean:
	@rm -rf $(OBJS)
	@printf "\033[31;1m[Remove *.o]\033[32;0m\n"
	@rm -rf $(OBJ_DIR)
	@printf "\033[31;1m[Remove $(OBJ_DIR)]\033[32;0m\n"

fclean: clean
	@rm -f $(NAME)
	@printf "\033[31;1m[Remove $(NAME)]\033[32;0m\n"

re: fclean all

.PHONY: all, clean, fclean, re

# _.-=+=-._.-=+=-._[ Dev Tools ]_.-=+=-._.-=+=-._ #

.PHONY: c, cf, r, git, fgit, m, mor, mft, exe

BRANCH	= main

git:
	@git pull
	@-git add .
	@git commit -am "Makefile push `date +'%Y-%m-%d %H:%M:%S'`"
	@-git push

fgit:
	@printf "\033[31;1m ======== /!\\ Hard reset to the preview commit ? /!\\ ======== \033[0m\n"
	@while true; do read -p "continue [y/N] ? " resp; if [[ $$resp =~ ^[Yy]$$ ]]; then exit 0; else exit 1; fi; done
	@git fetch --all
	@git reset --hard $(BRANCH)
	@git clean -f

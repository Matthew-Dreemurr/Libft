# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/13 11:30:03 by mahadad           #+#    #+#              #
#    Updated: 2021/11/27 00:33:55 by mahadad          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# _.-=+=-._.-=+=-._[ Var ]_.-=+=-._.-=+=-._ #
NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror $(INCLUDES)

D = 0
SANI = 0
WRA = 0
COMP_D = 0

ifeq ($(WRA), 1)
CFLAGS += -I includes/debug -D WRA
D = 1
endif

ifeq ($(SANI), 1)
CFLAGS += -fsanitize=address
D = 1
endif

ifeq ($(D), 1)
CFLAGS += -g3
endif

# _.-=+=-._.-=+=-._[ Source & Bin ]_.-=+=-._.-=+=-._ #
SRC_DIR = src/
OBJ_DIR = obj_libft/

# _.-=[ src/libc/ctype ]=-._ #
SRCS = \
ft_isalpha.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c \
ft_toupper.c \
ft_tolower.c

# _.-=[ src/libc/string ]=-._ #
SRCS += \
ft_bzero.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
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
len_chrchr.c \
strjoin_and_free.c \
strlen_protect.c \
rev_char_arr.c

# _.-=[ src/libc/stdlib ]=-._ #
SRCS += \
ft_calloc.c \
ft_itoa.c \
ft_atoi.c \
free_return.c

# _.-=[ src/libc/libft ]=-._ #
SRCS += \
ft_substr.c \
ft_strjoin.c \
ft_strtrim.c \
ft_split.c \
ft_strmapi.c \
ft_striteri.c \
ft_putchar_fd.c \
ft_putnbr_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c

# _.-=[ src/libc/custom ]=-._ #
SRCS += \
ft_putchar.c \
ft_putstr.c \
putstr_ret_int.c \
putchar_ret_int.c

# _.-=[ src/libc/linklst ]=-._ #
SRCS += \
ft_lstnew.c \
ft_lstadd_front.c \
ft_lstsize.c \
ft_lstlast.c \
ft_lstadd_back.c \
ft_lstdelone.c \
ft_lstclear.c \
ft_lstiter.c \
ft_lstmap.c

# _.-=[ src/libc/vector ]=-._ #
SRCS += \
vect_init.c \
vect_cat.c \
vect_push.c \
vect_resize.c \
vect_itoa_cat.c \
vect_utoa_cat.c \
vect_utohex_cat.c

# _.-=[ src/libc/vector ]=-._ #
SRCS += \
ft_printf.c \
conv_ptr.c \
conv_digit.c \
conv_utils.c \
arg_manager.c \
conv_char.c

INCLUDES = \
-I includes/ \
-I src/printf/includes \
-I src/vector/includes

SRC		= $(notdir $(SRCS))
OBJ		= $(SRC:.c=.o)
OBJS	= $(addprefix $(OBJ_DIR), $(OBJ))

VPATH	= $(SRC_DIR) $(OBJ_DIR) $(shell find $(SRC_DIR) -type d)

all: $(NAME)

$(OBJ_DIR)%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@if [[ $(COMP_D) = "0" ]]; then printf "\033[32;1m.\033[32;0m"; else printf "\033[32;1m$@\033[32;0m\n"; fi

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
	@printf "\033[32;1m[Create $(OBJ_DIR)]\033[32;0m\n"

$(NAME): $(OBJ_DIR) $(OBJS)
	@ar -rcs $(NAME) $(OBJS)
	@printf "\n\033[32;1m[== Linked OK ==]\033[32;0m\n"
	@if [[ $D = "1" ]]; then printf "\033[31;1m[/!\\ DEBUG ENABLE /!\\]\033[32;0m\n"; fi
	@printf "\033[32;1m[== $(NAME) Created ! ==]\033[32;0m\n"

clean:
	@rm -rf $(OBJS)
	@printf "\033[31;1m[Remove *.o]\033[32;0m\n"
	@rm -rf $(OBJ_DIR)
	@printf "\033[31;1m[Remove $(OBJ_DIR)]\033[32;0m\n"

fclean: clean
	@rm -f $(NAME)
	@printf "\033[31;1m[Remove $(NAME)]\033[32;0m\n"

subfclean: fclean
	make fclean -C src/printf

re: fclean all

.PHONY: all, clean, fclean, re

# _.-=+=-._.-=+=-._[ Dev Tools ]_.-=+=-._.-=+=-._ #
.PHONY: c, cf, r, git, fgit, m, mor, mft, exe, h

m:
	$(CC) $(CFLAGS) $(INCLUDES) $(NAME) test/main_lib.c

h:
	@echo "\033[1J"

c: clean

fc: fclean

r: re

git:
	@git pull
	@-git add .
	@git commit -am "Makefile push `date +'%Y-%m-%d %H:%M:%S'`"
	@-git push

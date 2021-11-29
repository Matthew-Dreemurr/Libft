# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/13 11:30:03 by mahadad           #+#    #+#              #
#    Updated: 2021/11/29 16:15:05 by mahadad          ###   ########.fr        #
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
OBJ_DIR = obj_$(basename $(NAME))/


INCLUDES = \
-I includes

SRCS	= $(notdir $(shell find $(SRC_DIR) -type f -name "*.c"))
OBJS	= $(addprefix $(OBJ_DIR), $(notdir $(SRCS:.c=.o)))

VPATH	= $(SRC_DIR) $(OBJ_DIR) $(shell find $(SRC_DIR) -type d)

all: $(NAME)

bonus: all

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

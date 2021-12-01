# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/13 11:30:03 by mahadad           #+#    #+#              #
#    Updated: 2021/12/01 17:35:38 by mahadad          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# _.-=+=-._.-=+=-._[ Var ]_.-=+=-._.-=+=-._ #

NAME = so_long

CC = gcc
CFLAGS = -Wall -Wextra -Werror $(INCLUDES)
INCLUDES = -I includes/

GIT_PWD = $(shell pwd)

D = 0
SANI = 0

ifeq ($(SANI), 1)
CFLAGS += -fsanitize=address
D = 1
endif

ifeq ($(D), 1)
CFLAGS += -g3
endif

# _.-=+=-._.-=+=-._[ Source & Bin ]_.-=+=-._.-=+=-._ #

SRC_DIR = src/
OBJ_DIR = obj_$(NAME)/
DEP_INCLUDE_DIR = includes/
DEP_LIBFT = libft/libft.a

HEADER = $(shell find src -type f -name "*.h")
HEADER += libft/includes/libft.h
HEADER_DEP = $(addprefix $(DEP_INCLUDE_DIR), $(notdir $(HEADER)))
SRCS = $(shell find $(SRC_DIR) -type f -name "*.c")

SRC		= $(notdir $(SRCS))
OBJ		= $(SRC:.c=.o)
OBJS	= $(addprefix $(OBJ_DIR), $(OBJ))

VPATH	= $(SRC_DIR) $(OBJ_DIR) libft/includes $(shell find $(SRC_DIR) -type d)

# _.-=+=-._.-=+=-._[ Rules ]_.-=+=-._.-=+=-._ #
.PHONY: all, clean, fclean, re

all: $(DEP_LIBFT) $(DEP_INCLUDE_DIR) $(HEADER_DEP) $(NAME)

$(DEP_LIBFT):
	make -C $(dir $(DEP_LIBFT))

# wtf !? i don't understand why is work but it's work
$(DEP_INCLUDE_DIR)%.h: %.h
	ln -s $(GIT_PWD)/$< $@

$(OBJ_DIR)%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "\033[32;1m$@\033[32;0m\n"

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	@printf "\033[32;1m[Create $(OBJ_DIR)]\033[32;0m\n"

$(DEP_INCLUDE_DIR):
	@mkdir -p $(DEP_INCLUDE_DIR)
	@printf "\033[32;1m[Create $(DEP_INCLUDE_DIR)]\033[32;0m\n"

$(NAME): $(OBJ_DIR) $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(DEP_LIBFT) -o $(NAME)
	@printf "\033[32;1m[== Linked OK ==]\033[32;0m\n"
	@printf "\033[32;1m[== $(NAME) Created ! ==]\033[32;0m\n"
	@if [[ $D = "1" ]]; then printf "\033[31;1m[/!\\ DEBUG ENABLE /!\\]\033[32;0m\n"; fi
	@printf "[Compiled /w this flag $(CFLAGS)]"

clean:
	make clean -C $(dir $(DEP_LIBFT))
	rm -rf $(HEADER_DEP)
	@printf "\033[31;1m[Remove $(DEP_INCLUDE_DIR).*h]\033[32;0m\n"
	@rm -rf $(OBJS)
	@printf "\033[31;1m[Remove *.o]\033[32;0m\n"
	@rm -rf $(OBJ_DIR)
	@printf "\033[31;1m[Remove $(OBJ_DIR)]\033[32;0m\n"

fclean: clean
	make fclean -C $(dir $(DEP_LIBFT))
	@rm -f $(NAME)
	@printf "\033[31;1m[Remove $(NAME)]\033[32;0m\n"

re: fclean all

# _.-=+=-._.-=+=-._[ Dev Tools ]_.-=+=-._.-=+=-._ #
.PHONY: c, cf, r, git, h

h:
	@echo "\033[1J"

c: clean

fc: fclean

r: re

git:
	@git pull
	@git status --short
	@while true; do read -p "Continue [y/N]" resp; if [[ $$resp =~ ^[Yy]$$ ]]; then exit 0; else exit 1; fi; done
	# @git diff
	@-git add .
	@git commit -am "Makefile push `date +'%Y-%m-%d %H:%M:%S'`"
	@-git push
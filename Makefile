# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: magoumi <magoumi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/27 18:36:21 by magoumi           #+#    #+#              #
#    Updated: 2019/12/16 00:26:47 by magoumi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_PATH = src

SRC_NAME = 	filler.c \
			create_priority.c \
			read_map.c \
			read_token.c \
			player_step.c \
			ft_free.c

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))

OBJ_PATH = obj

OBJ_NAME = $(SRC_NAME:.c=.o)

OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

CPPFLAGS =-Iincludes -Ilibft/include

LDFLAGS = -Llibft

LDLIBS = -lft

NAME = magoumi.filler

CC = gcc

CFLAGS = -Wall -Wextra -Werror

DEPS = includes/filler.h

.PHONY: all, clean, fclean, re

all: $(NAME)

$(NAME): $(OBJ)
		@cd libft ; make
		$(CC) $^ -o $@ $(LDFLAGS) $(LDLIBS)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c $(DEPS)
	   @mkdir $(OBJ_PATH) 2> /dev/null || true
	   $(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

clean:
	@make -C libft clean
	@rm -vf $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true

fclean: clean
	@make -C libft fclean
	@rm -vf $(NAME)

re: fclean all
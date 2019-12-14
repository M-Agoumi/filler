# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: magoumi <magoumi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/27 18:36:21 by magoumi           #+#    #+#              #
#    Updated: 2019/12/10 08:38:04 by magoumi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = magoumi.filler

HDIR = $(SRC)

FLAGS = -Werror -Wall -Wextra

GG = gcc

INCL = libft/libft.a

HINCL = -Iincludes

FSRC = src

SRC = filler.c \
		create_priority.c \
		read_map.c \
		read_token.c \
		player_step.c

OBJECT = filler.o \
		create_priority.o \
		read_map.o \
		read_token.o \
		player_step.o

all: $(NAME)

$(NAME):
	make -C libft/
	$(GG) $(HINCL) $(FLAGS) -c $(SRC)
	$(GG) $(HINCL) -o $(NAME) $(OBJECT) $(INCL)

clean :
	make clean -C libft/
	rm -f *.o

fclean : clean
	rm -rf $(NAME)
	make fclean -C libft/

re : fclean all
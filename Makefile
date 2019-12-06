# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: magoumi <magoumi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/27 18:36:21 by magoumi           #+#    #+#              #
#    Updated: 2019/12/06 04:26:59 by magoumi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = magoumi.filler

HDIR = $(SRC)

FLAGS = -Werror -Wall -Wextra

GG = gcc

INCL = ft_printf/libftprintf.a libft/libft.a

HINCL = -Iincludes

FSRC = src

SRC = filler.c \
		create_priority.c

OBJECT = filler.o \
		create_priority.c

all: $(NAME)

$(NAME):
	make -C ft_printf/
	$(GG) $(HINCL) $(FLAGS) -c $(SRC)
	$(GG) $(HINCL) -o $(NAME) $(OBJECT) $(INCL)

clean :
	make clean -C ft_printf/
	rm -f *.o

fclean : clean
	rm -rf $(NAME)
	make fclean -C ft_printf/

re : fclean all
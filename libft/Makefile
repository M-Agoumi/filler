# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: magoumi <magoumi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/04 22:41:07 by magoumi           #+#    #+#              #
#    Updated: 2019/12/06 04:21:37 by magoumi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

all: $(NAME)
$(NAME):
	gcc -c -Werror -Wall -Wextra *.c
	ar rc $(NAME) *.o
clean :
	rm -f *.o
fclean : clean
	rm -rf $(NAME)
re : fclean all

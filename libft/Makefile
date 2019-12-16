# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: magoumi <magoumi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/04 22:41:07 by magoumi           #+#    #+#              #
#    Updated: 2019/12/16 00:24:08 by magoumi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_PATH = src

SRC_NAME = 	check_format.c \
			count_position.c \
			flags_others.c \
			flags_set.c \
			ft_arylen.c \
			ft_atoi.c \
			ft_build.c \
			ft_bzero.c \
			ft_chareplace.c \
			ft_countnumber.c \
			ft_countword.c \
			ft_hcf.c \
			ft_implode.c \
			ft_intdel.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_itoa_base.c \
			ft_itoa_double.c \
			ft_itoa_double_g.c \
			ft_itoa_exp.c \
			ft_itoa_negative.c \
			ft_itoa_negative_decimal.c \
			ft_itoa_signed.c \
			ft_itoa_unsigned.c \
			ft_lcm.c \
			ft_lstadd.c \
			ft_lstdel.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_max.c \
			ft_memalloc.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memdel.c \
			ft_memmove.c \
			ft_memset.c \
			ft_min.c \
			ft_power.c \
			ft_printf.c \
			ft_putchar.c \
			ft_putchar_fd.c \
			ft_putendl.c \
			ft_putendl_fd.c \
			ft_putnbr.c \
			ft_putnbr_fd.c \
			ft_putstr.c \
			ft_putstr_fd.c \
			ft_strcat.c \
			ft_strccpy.c \
			ft_strchr.c \
			ft_strclr.c \
			ft_strcmp.c \
			ft_strcpy.c \
			ft_strdel.c \
			ft_strdup.c \
			ft_strequ.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlen.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strncat.c \
			ft_strncmp.c \
			ft_strncpy.c \
			ft_strnequ.c \
			ft_strnew.c \
			ft_strnstr.c \
			ft_strpos.c \
			ft_strrchr.c \
			ft_strrev.c \
			ft_strsplit.c \
			ft_strstr.c \
			ft_strsub.c \
			ft_strtrim.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_toupper_s.c \
			get_next_line.c \
			identification_1.c \
			identification_2.c \
			identification_3.c \
			identification_4.c \
			length_precision.c \
			min_width.c \
			read_wchar.c 

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))

OBJ_PATH = obj

OBJ_NAME = $(SRC_NAME:.c=.o)

OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

CPPFLAGS =-Iinclude

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

DEPS = include/libft.h include/libftprintf.h

.PHONY: all, clean, fclean, re

all: $(NAME)

$(NAME): $(OBJ)
		@ar rc $(NAME) $^
		ranlib $(NAME) 

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c $(DEPS)
	   @mkdir $(OBJ_PATH) 2> /dev/null || true
	   $(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

clean:
	@rm -vf $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true

fclean: clean
	@rm -vf $(NAME)

re: fclean all
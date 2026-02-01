# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agomez-a <agomez-a@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/30 11:27:47 by agomez-a          #+#    #+#              #
#    Updated: 2026/01/30 19:01:32 by agomez-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Werror -Wextra -g

SRC = ft_printf.c format_especifiers.c ft_putstr.c ft_putnbr.c ft_unsigned.c ft_hex_low.c ft_hex_up.c ft_pointer.c ft_putchar.c
OBJ = $(SRC:.c=.o)

HEADERS = ft_printf.h

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
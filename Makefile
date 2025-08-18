# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/04 12:29:14 by sade-ara          #+#    #+#              #
#    Updated: 2025/08/14 16:25:48 by sade-ara         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

RM = rm -rf
CC = cc
CFLAGS = -Wextra -Werror -Wall -g -O0

SRCS = push_swap.c stack_utils.c parser.c pop_push_ops.c\
		shift_down.c shift_up.c swap_ops.c\
		utils.c sort_number.c ft_split.c ft_substr.c

OBJ = $(SRCS:.c=.o)

HEADER = push_swap.h

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
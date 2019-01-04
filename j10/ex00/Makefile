# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnabet <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/16 17:02:29 by jnabet            #+#    #+#              #
#    Updated: 2018/09/18 12:03:24 by jnabet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./srcs/
OBJS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
FLAGS = -Wall -Wextra -Werror
HEADER = ./includes/

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC)ft_putchar.c -I $(HEADER)
	gcc $(FLAGS) -c $(SRC)ft_putstr.c -I $(HEADER)
	gcc $(FLAGS) -c $(SRC)ft_strcmp.c -I $(HEADER)
	gcc $(FLAGS) -c $(SRC)ft_strlen.c -I $(HEADER)
	gcc $(FLAGS) -c $(SRC)ft_swap.c -I $(HEADER)
	ar rcs $(NAME) $(OBJS)

clean:
	    rm -f $(OBJS)
fclean: clean
	    rm -f $(NAME)

re: fclean all

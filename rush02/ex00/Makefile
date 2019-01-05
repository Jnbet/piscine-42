# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcouduri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/15 15:05:16 by gcouduri          #+#    #+#              #
#    Updated: 2018/09/16 21:34:16 by jnabet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

NAME00 = colle-00

NAME01 = colle-01

NAME02 = colle-02

NAME03 = colle-03

NAME04 = colle-04

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) main.c ft_validate.c structs.c tools.c
	gcc -Wall -Wextra -Werror -o $(NAME00) main_rush.c ft_atoi.c ft_putchar.c rush00.c 	
	gcc -Wall -Wextra -Werror -o $(NAME01) main_rush.c ft_atoi.c ft_putchar.c rush01.c 
	gcc -Wall -Wextra -Werror -o $(NAME02) main_rush.c ft_atoi.c ft_putchar.c rush02.c 
	gcc -Wall -Wextra -Werror -o $(NAME03) main_rush.c ft_atoi.c ft_putchar.c rush03.c 
	gcc -Wall -Wextra -Werror -o $(NAME04) main_rush.c ft_atoi.c ft_putchar.c rush04.c 

%.o: %.c
	gcc -c $*.c

clean:
	rm -f *.o
	
fclean:
	/bin/rm -f $(NAME) $(NAME00) $(NAME01) $(NAME02) $(NAME03) $(NAME04)

re: fclean all

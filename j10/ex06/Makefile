# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnabet <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/17 18:40:57 by jnabet            #+#    #+#              #
#    Updated: 2018/09/17 19:18:27 by jnabet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) *.c

%.o: %.c
	gcc -c $*.c

clean:
	rm -f $(NAME)

re: clean all

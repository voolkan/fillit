#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: theherbr <theherbr@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/28 14:50:14 by theherbr          #+#    #+#              #
#    Updated: 2016/04/30 18:35:28 by theherbr         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = fillit

FLAGS = -Wall -Wextra -Werror

SRC = ./src/*.c

OBJ = *.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC) -I libft/includes/
	gcc -o $(NAME) $(OBJ) -L libft/ -lft

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all re clean fclean

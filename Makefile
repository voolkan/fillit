#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: theherbr <theherbr@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/28 14:50:14 by theherbr          #+#    #+#              #
#    Updated: 2016/04/28 15:14:10 by theherbr         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = fillit

FLAGS = -Wall -Wextra -Werror

SRC = *.c

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -I libft/includes -L libft/ -lft

#clean:


#fclean: clean
#	rm -f $(NAME)

#re: fclean $(NAME)

.PHONY: all re clean fclean

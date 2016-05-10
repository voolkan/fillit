#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: theherbr <theherbr@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/28 14:50:14 by theherbr          #+#    #+#              #
#    Updated: 2016/05/10 19:02:34 by theherbr         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = fillit

FLAGS = -Wall -Wextra -Werror

SRC = ./src/board.c \
./src/check_argc_or_empty.c \
./src/erase_pos2.c \
./src/erase_pos.c \
./src/check_pos2.c \
./src/check_pos.c \
./src/fill_struct.c \
./src/fill_pos2.c \
./src/fill_pos.c \
./src/format.c \
./src/main.c \
./src/get_board_from_file.c \
./src/tabtab.c \
./src/solve.c \
./src/find_tetri_type.c

OBJ = ./board.o \
./check_argc_or_empty.o \
./erase_pos2.o \
./erase_pos.o \
./check_pos2.o \
./check_pos.o \
./fill_struct.o \
./fill_pos2.o \
./fill_pos.o \
./format.o \
./main.o \
./get_board_from_file.o \
./tabtab.o \
./solve.o \
./find_tetri_type.o

all: $(NAME)

$(NAME): $(SRC)
	make -C libft
	gcc $(FLAGS) -c $(SRC) -I libft/includes/
	gcc -o $(NAME) $(OBJ) -L libft/ -lft

clean:
	rm -f $(OBJ)
	make clean -C libft

fclean: clean
	rm -f $(NAME)
	make fclean -C libft

re: fclean $(NAME)

.PHONY: all re clean fclean

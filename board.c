/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theherbr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/18 16:30:34 by theherbr          #+#    #+#             */
/*   Updated: 2016/03/20 20:20:10 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

unsigned int	get_minsize(unsigned int nbr_pieces)

{
	unsigned int	i;

	i = 0;
	while((i * i) < (nbr_pieces * 4))
		i++;
	return (i);
}

char	**create_board(unsigned int board_size)
{
	char	**board;
	int		i;

	i = 0;
	board = (char **)malloc(sizeof(char *) * board_size);
	if(!board)
		error("alloc board_size");
	while(i != board_size)
	{
		board[i] = (char *)malloc(sizeof(char) * (board_size));
		i++;
	}
	return (board);
}

void    free_board(char **board, int nbr_pieces)
{
	int i;

	i = 0;
	while (i < nbr_pieces)
	{
		free(board[i]);
		i++;
	}
	free(board);
}

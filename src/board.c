/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theherbr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/18 16:30:34 by theherbr          #+#    #+#             */
/*   Updated: 2016/05/01 16:47:37 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

unsigned int	get_minsize(unsigned int nbr_pieces)
{
	unsigned int	i;

	i = 0;
	while ((i * i) < (nbr_pieces * 4))
		i++;
	return (i);
}

char			**create_board(unsigned int board_size)
{
	char			**board;
	unsigned int	i;

	i = 0;
	board = (char **)malloc(sizeof(char *) * (board_size + 1));
	if (!board)
		error();
	while (i != board_size)
	{
		board[i] = (char *)malloc(sizeof(char) * (board_size + 1));
		i++;
	}
	return (board);
}

void			free_board(char **board, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		free(board[i]);
		i++;
	}
	free(board);
}

void			print(char **board, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		ft_putendl(board[i]);
		i++;
	}
}

char			**dotify(char **board, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size)
		{
			board[i][j] = '.';
			j++;
		}
		board[i][j] = '\0';
		i++;
		j = 0;
	}
	return (board);
}

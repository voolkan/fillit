/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/04 15:49:13 by scluzeau          #+#    #+#             */
/*   Updated: 2016/03/07 21:01:10 by theherbr         ###   ########.fr       */
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
		board[i] = (char *)malloc(sizeof(char) * (board_size + 1));
		i++;
	}
	return (board);
}

void	fill(char **s, int i, int type)
{


}

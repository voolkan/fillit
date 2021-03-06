/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theherbr <theherbr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 14:01:37 by theherbr          #+#    #+#             */
/*   Updated: 2016/04/30 20:09:23 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	solve(struct s_piece *tab_pieces, int nbr_pieces)
{
	int				tab_i;
	char			**board;
	struct s_norme	nrm;

	tab_i = 0;
	nrm.size = get_minsize(nbr_pieces);
	board = create_board(nrm.size);
	board = dotify(board, nrm.size);
	nrm.nbr_pieces = nbr_pieces;
	while (backtrack(board, nrm, tab_pieces, tab_i) == 2)
	{
		tab_i = 0;
		free_board(board, nrm.size);
		nrm.size++;
		board = create_board(nrm.size);
		board = dotify(board, nrm.size);
	}
}

int		backtrack(char **board, struct s_norme nrm,
				struct s_piece *tab_pieces, int tab_i)
{
	tab_pieces[tab_i].x = 0;
	tab_pieces[tab_i].y = 0;
	while (tab_pieces[tab_i].y < nrm.size)
	{
		while (tab_pieces[tab_i].x < nrm.size)
		{
			if (check_pos(tab_pieces[tab_i], board, nrm.size) == 1)
			{
				fill_pos(tab_pieces[tab_i], board, tab_pieces[tab_i].letter);
				if (tab_i + 1 == nrm.nbr_pieces)
				{
					print(board, nrm.size);
					free_board(board, nrm.size);
					exit(0);
				}
				backtrack(board, nrm, tab_pieces, tab_i + 1);
				erase_pos(tab_pieces[tab_i], board);
			}
			tab_pieces[tab_i].x++;
		}
		tab_pieces[tab_i].x = 0;
		tab_pieces[tab_i].y++;
	}
	return (2);
}

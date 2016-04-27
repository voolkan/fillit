/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   theone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theherbr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/04 17:21:18 by theherbr          #+#    #+#             */
/*   Updated: 2016/04/27 19:39:53 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		backtrack(char **board, unsigned int size, struct s_piece *tab_pieces, int tab_i, int nbr_pieces)
{
	tab_pieces[tab_i].x = 0;
	tab_pieces[tab_i].y = 0;
	while (tab_pieces[tab_i].y < size)
	{
		while (tab_pieces[tab_i].x < size)
		{
			if (check_pos(tab_pieces[tab_i], board, size) == 1)
			{
				fill_pos(tab_pieces[tab_i], board, tab_pieces[tab_i].letter);
				if (tab_i + 1 == nbr_pieces)
				{
					print(board, size);
					free_board(board, size);
					exit(0);
				}
				backtrack(board, size, tab_pieces, tab_i + 1, nbr_pieces);
				erase_pos(tab_pieces[tab_i], board);
			}
			tab_pieces[tab_i].x++;
		}
		tab_pieces[tab_i].x = 0;
		tab_pieces[tab_i].y++;
	}
	return (2);
}

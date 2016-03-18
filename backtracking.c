/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theherbr <theherbr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/13 15:36:51 by theherbr          #+#    #+#             */
/*   Updated: 2016/03/18 17:23:16 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**bt(char **board, unsigned int size, char letter, int *tab_pieces, int tab_i, int nbr_pieces)
{
	char			**old_board;
	unsigned int 	x;
	unsigned int	y;
//	unsigned int	i;

	x = 0;
	y = 0;
	old_board = board;
	while (y < size)
	{
		while (x < size)
		{
			if (check_pos(tab_pieces[tab_i], board, y, x, size) == 1)
			{
				board = fill_pos(tab_pieces[tab_i], board, y, x, letter++);
//				ft_putendl("");
//				print(board, size);
				ft_putstr("tab_i : ");
				ft_putnbr(tab_i);
				ft_putendl("");
				if (tab_i == nbr_pieces) // ???
				{
					print(board, size);
					return (board);
				}
				board = bt(board, size, letter, tab_pieces, ++tab_i, nbr_pieces);
			}
			x++;
		}
		x = 0;
		y++;
//		board = create_board(++size);
//		board = dots(board, size);
		ft_putendl("SALUT");
	}
	return (old_board);
}

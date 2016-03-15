/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theherbr <theherbr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/13 15:36:51 by theherbr          #+#    #+#             */
/*   Updated: 2016/03/15 17:16:19 by scluzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**bt(char **board, unsigned int size, char letter, int *tab_pieces, int tab_i)
{
	char			**old_board;
	unsigned int 	x;
	unsigned int	y;
//	unsigned int	i;

	x = 0;
	y = 0;
	old_board = board;
	while (y <= size)
	{
		while (x <= size)
		{
			if (check_pos(tab_pieces[tab_i], board, y, x) == 1)
			{
				board = fill_pos(tab_pieces[tab_i], board, y, x, letter++);
				ft_putendl("");
				print(board, size);
				if (!tab_pieces[tab_i + 1]) // ???
				{
//					print(board, size);
					exit (0);
//					return (board);
				}
				board = bt(board, size, letter, tab_pieces, ++tab_i);
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

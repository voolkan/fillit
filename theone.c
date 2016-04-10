/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   theone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theherbr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/04 17:21:18 by theherbr          #+#    #+#             */
/*   Updated: 2016/04/10 15:53:29 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		backtrack(char **board, unsigned int size, struct s_piece *tab_pieces, int tab_i, int nbr_pieces)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
//	ft_putendl("STARTING. We have now :");
//	print(board, size);
//	ft_putendl("");
	while (y < size)
	{
		while (x < size)
		{
//			ft_putendl("can we place something here ?");
//			ft_putendl("debug :");
//			ft_putstr("tab_i = ");
//			ft_putnbr(tab_i);
//			ft_putendl("");
//			ft_putstr("type = ");
//			ft_putnbr(tab_pieces[tab_i].type);
//			ft_putendl("");
			if (check_pos(tab_pieces[tab_i].type, board, y, x, size) == 1)
			{
//				ft_putendl("Yes we can !");
				fill_pos(tab_pieces[tab_i].type, board, y, x, tab_pieces[tab_i].letter);
				if (tab_i + 1 == nbr_pieces)
				{
//					ft_putendl("ENDING :");
					print(board, size);
					free_board(board, size);
					exit(0);
				}
				backtrack(board, size, tab_pieces, tab_i + 1, nbr_pieces);
				erase_pos(tab_pieces[tab_i].type, board, y, x);
			}
//			else
//				ft_putendl("Nope.");
			x++;
		}
		x = 0;
		y++;
	}
//	ft_putendl("888");
	return (888);
}

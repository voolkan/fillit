/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   theone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theherbr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/04 17:21:18 by theherbr          #+#    #+#             */
/*   Updated: 2016/04/06 19:53:19 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fliit.h"

void	 theone(char **board, unsigned int size, struct s_pieces *tab_pieces, int tab_i)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
	ft_putendl("STARTING. We have now :");
	print(board, size);
	while (y < size)
	{
		while (x < size)
		{
			ft_putendl("can we place something here ?");
			if (check_pos(tab_pieces, tab_i))
			{
				ft_putendl("Yes we can !");
				fill_pos();
				if (tab_i + 1 == nbr_pieces)
				{
					ft_putendl("ENDING :");
					print(board, size);
					exit(0);
				}
				theone();
				erase_piece();
			}
			else
				ft_putendl("Nope.");
			x++;
		}
		x = 0;
		y++;
	}
	return ();
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   theone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theherbr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/04 17:21:18 by theherbr          #+#    #+#             */
/*   Updated: 2016/04/04 18:30:24 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fliit.h"

void	 theone(char **board, unsigned int siz)
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
				ft_putendl("YES WE CAN");

			}
			x++;
		}
		x = 0;
		y++;
	}
	ft_putendl("Dammit, we must increase the size !");
	size++;
	free_board(board, nbr_pieces);
	board = create_board(size);
	board = dotify(board, size);
	theone();
}

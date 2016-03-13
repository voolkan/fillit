/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theherbr <theherbr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/13 15:36:51 by theherbr          #+#    #+#             */
/*   Updated: 2016/03/13 18:08:10 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**bt(board, size,)
{
	char	**old_board;

	old_board = board;
	while (y < size)
	{
		while (x < size)
		{
			if (check() = 1);
			board = bt(board, );
			x++;
		}
		x = 0;
		y++;
	}
	return (old_board);
}

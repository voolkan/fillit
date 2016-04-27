/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_pos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 13:06:05 by scluzeau          #+#    #+#             */
/*   Updated: 2016/04/27 19:16:22 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_pos(struct s_piece elem, char **board, unsigned int size)
{
	if (elem.type == 1 && elem.x + 1 < size && elem.y + 2 < size)
	{
		if (board[elem.y][elem.x] == '.' &&
			board[elem.y][elem.x + 1] == '.' &&
			board[elem.y + 1][elem.x] == '.' &&
			board[elem.y + 2][elem.x] == '.')
			return (1);
	}
	else if (elem.type == 2 && elem.x + 2 < size && elem.y + 1 < size)
	{
		if (board[elem.y][elem.x] == '.' &&
			board[elem.y + 1][elem.x] == '.' &&
			board[elem.y + 1][elem.x + 1] == '.' &&
			board[elem.y + 1][elem.x + 2] == '.')
			return (1);
	}
	else if (elem.type == 3 && elem.x + 1 < size && elem.y + 2 < size)
	{
		if (board[elem.y][elem.x + 1] == '.' &&
			board[elem.y + 1][elem.x + 1] == '.' &&
			board[elem.y + 2][elem.x] == '.' &&
			board[elem.y + 2][elem.x + 1] == '.')
			return (1);
	}
	else if (elem.type == 4 && elem.x + 2 < size && elem.y + 1 < size)
	{
		if (board[elem.y][elem.x] == '.' &&
			board[elem.y][elem.x + 1] == '.' &&
			board[elem.y][elem.x + 2] == '.' &&
			board[elem.y + 1][elem.x + 2] == '.')
			return (1);
	}
	else if (elem.type == 5 && elem.x + 2 < size && elem.y + 1 < size)
	{
		if (board[elem.y][elem.x + 1] == '.' &&
			board[elem.y + 1][elem.x] == '.' &&
			board[elem.y + 1][elem.x + 1] == '.' &&
			board[elem.y + 1][elem.x + 2] == '.')
			return (1);
	}
	else if (elem.type == 6 && elem.x + 1 < size && elem.y + 2 < size)
	{
		if (board[elem.y][elem.x] == '.' &&
			board[elem.y + 1][elem.x] == '.' &&
			board[elem.y + 1][elem.x + 1] == '.' &&
			board[elem.y + 2][elem.x] == '.')
			return (1);
	}
	else if (elem.type == 7 && elem.x + 2 < size && elem.y + 1 < size)
	{
		if (board[elem.y][elem.x] == '.' &&
			board[elem.y][elem.x + 1] == '.' &&
			board[elem.y][elem.x + 2] == '.' &&
			board[elem.y + 1][elem.x + 1] == '.')
			return (1);
	}
	else if (elem.type == 8 && elem.x + 1 < size && elem.y + 2 < size)
	{
		if (board[elem.y][elem.x + 1] == '.' &&
			board[elem.y + 1][elem.x] == '.' &&
			board[elem.y + 1][elem.x + 1] == '.' &&
			board[elem.y + 2][elem.x + 1] == '.')
			return (1);
	}
	else if (elem.type == 9 && elem.y + 3 < size)
	{
		if (board[elem.y][elem.x] == '.' &&
			board[elem.y + 1][elem.x] == '.' &&
			board[elem.y + 2][elem.x] == '.' &&
			board[elem.y + 3][elem.x] == '.')
			return (1);
	}
	else if (elem.type == 10 && elem.x + 3 < size)
	{
		if (board[elem.y][elem.x] == '.' &&
			board[elem.y][elem.x + 1] == '.' &&
			board[elem.y][elem.x + 2] == '.' &&
			board[elem.y][elem.x + 3] == '.')
			return (1);
	}
	else if (elem.type == 11 && elem.x + 1 < size && elem.y + 1 < size)
	{
		if (board[elem.y][elem.x] == '.' &&
			board[elem.y + 1][elem.x] == '.' &&
			board[elem.y][elem.x + 1] == '.' &&
			board[elem.y + 1][elem.x + 1] == '.')
			return (1);
	}
	else if (elem.type == 12 && elem.x + 1 < size && elem.y + 2 < size)
	{
		if (board[elem.y][elem.x] == '.' &&
			board[elem.y][elem.x + 1] == '.' &&
			board[elem.y + 1][elem.x + 1] == '.' &&
			board[elem.y + 2][elem.x + 1] == '.')
			return (1);
	}
	else if (elem.type == 13 && elem.x + 2 < size && elem.y + 1 < size)
	{
		if (board[elem.y][elem.x] == '.' &&
			board[elem.y][elem.x + 1] == '.' &&
			board[elem.y][elem.x + 2] == '.' &&
			board[elem.y + 1][elem.x] == '.')
			return (1);
	}
	else if (elem.type == 14 && elem.x + 1 < size && elem.y + 2 < size)
	{
		if (board[elem.y][elem.x] == '.' &&
			board[elem.y + 1][elem.x] == '.' &&
			board[elem.y + 2][elem.x] == '.' &&
			board[elem.y + 2][elem.x + 1] == '.')
			return (1);
	}
	else if (elem.type == 15 && elem.x + 2 < size && elem.y + 1 < size)
	{
		if (board[elem.y][elem.x + 2] == '.' &&
			board[elem.y + 1][elem.x] == '.' &&
			board[elem.y + 1][elem.x + 1] == '.' &&
			board[elem.y + 1][elem.x + 2] == '.')
			return (1);
	}
	else if (elem.type == 16 && elem.x + 1 < size && elem.y + 2 < size)
	{
		if (board[elem.y][elem.x + 1] == '.' &&
			board[elem.y + 1][elem.x] == '.' &&
			board[elem.y + 1][elem.x + 1] == '.' &&
			board[elem.y + 2][elem.x] == '.')
			return (1);
	}
	else if (elem.type == 17 && elem.x + 2 < size && elem.y + 1 < size)
	{
		if (board[elem.y][elem.x] == '.' &&
			board[elem.y][elem.x + 1] == '.' &&
			board[elem.y + 1][elem.x + 1] == '.' &&
			board[elem.y + 1][elem.x + 2] == '.')
			return (1);
	}
	else if (elem.type == 18 && elem.x + 1 < size && elem.y + 2 < size)
	{
		if (board[elem.y][elem.x] == '.' &&
			board[elem.y + 1][elem.x] == '.' &&
			board[elem.y + 1][elem.x + 1] == '.' &&
			board[elem.y + 2][elem.x + 1] == '.')
			return (1);
	}
	else if (elem.type == 19 && elem.x + 2 < size && elem.y + 1 < size)
	{
		if (board[elem.y][elem.x + 1] == '.' &&
			board[elem.y][elem.x + 2] == '.' &&
			board[elem.y + 1][elem.x] == '.' &&
			board[elem.y + 1][elem.x + 1] == '.')
			return (1);
	}
	return (-1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_pos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 13:06:05 by scluzeau          #+#    #+#             */
/*   Updated: 2016/04/30 17:07:02 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_pos1012(struct s_piece elem, char **board, unsigned int size)
{
	if (elem.type == 10 && elem.x + 3 < size)
	{
		if (board[elem.y][elem.x] == '.' && board[elem.y][elem.x + 1] == '.' &&
			board[elem.y][elem.x + 2] == '.' &&
			board[elem.y][elem.x + 3] == '.')
			return (1);
	}
	else if (elem.type == 11 && elem.x + 1 < size && elem.y + 1 < size)
	{
		if (board[elem.y][elem.x] == '.' && board[elem.y + 1][elem.x] == '.' &&
			board[elem.y][elem.x + 1] == '.' &&
			board[elem.y + 1][elem.x + 1] == '.')
			return (1);
	}
	else if (elem.type == 12 && elem.x + 1 < size && elem.y + 2 < size)
	{
		if (board[elem.y][elem.x] == '.' && board[elem.y][elem.x + 1] == '.' &&
			board[elem.y + 1][elem.x + 1] == '.' &&
			board[elem.y + 2][elem.x + 1] == '.')
			return (1);
	}
	return (-1);
}

int		check_pos1315(struct s_piece elem, char **board, unsigned int size)
{
	if (elem.type == 13 && elem.x + 2 < size && elem.y + 1 < size)
	{
		if (board[elem.y][elem.x] == '.' &&
			board[elem.y][elem.x + 1] == '.' &&
			board[elem.y][elem.x + 2] == '.' &&
			board[elem.y + 1][elem.x] == '.')
			return (1);
	}
	else if (elem.type == 14 && elem.x + 1 < size && elem.y + 2 < size)
	{
		if (board[elem.y][elem.x] == '.' && board[elem.y + 1][elem.x] == '.' &&
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
	return (-1);
}

int		check_pos1618(struct s_piece elem, char **board, unsigned int size)
{
	if (elem.type == 16 && elem.x + 1 < size && elem.y + 2 < size)
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
	return (-1);
}

int		check_pos19(struct s_piece elem, char **board, unsigned int size)
{
	if (elem.x + 2 < size && elem.y + 1 < size)
	{
		if (board[elem.y][elem.x + 1] == '.' &&
			board[elem.y][elem.x + 2] == '.' &&
			board[elem.y + 1][elem.x] == '.' &&
			board[elem.y + 1][elem.x + 1] == '.')
			return (1);
	}
	return (-1);
}

int		check_pos(struct s_piece elem, char **board, unsigned int size)
{
	if (elem.type < 4)
		return (check_pos13(elem, board, size));
	else if (elem.type < 7)
		return (check_pos46(elem, board, size));
	else if (elem.type < 10)
		return (check_pos79(elem, board, size));
	else if (elem.type < 13)
		return (check_pos1012(elem, board, size));
	else if (elem.type < 16)
		return (check_pos1315(elem, board, size));
	else if (elem.type < 19)
		return (check_pos1618(elem, board, size));
	else if (elem.type == 19)
		return (check_pos19(elem, board, size));
	else
		return (-1);
}

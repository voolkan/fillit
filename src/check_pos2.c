/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_pos2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theherbr <theherbr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 13:27:11 by theherbr          #+#    #+#             */
/*   Updated: 2016/04/28 13:27:43 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_pos13(struct s_piece elem, char **board, unsigned int size)
{
	if (elem.type == 1 && elem.x + 1 < size && elem.y + 2 < size)
	{
		if (board[elem.y][elem.x] == '.' && board[elem.y][elem.x + 1] == '.' &&
			board[elem.y + 1][elem.x] == '.' &&
			board[elem.y + 2][elem.x] == '.')
			return (1);
	}
	else if (elem.type == 2 && elem.x + 2 < size && elem.y + 1 < size)
	{
		if (board[elem.y][elem.x] == '.' && board[elem.y + 1][elem.x] == '.' &&
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
	return (-1);
}

int		check_pos46(struct s_piece elem, char **board, unsigned int size)
{
	if (elem.type == 4 && elem.x + 2 < size && elem.y + 1 < size)
	{
		if (board[elem.y][elem.x] == '.' && board[elem.y][elem.x + 1] == '.' &&
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
		if (board[elem.y][elem.x] == '.' && board[elem.y + 1][elem.x] == '.' &&
			board[elem.y + 1][elem.x + 1] == '.' &&
			board[elem.y + 2][elem.x] == '.')
			return (1);
	}
	return (-1);
}

int		check_pos79(struct s_piece elem, char **board, unsigned int size)
{
	if (elem.type == 7 && elem.x + 2 < size && elem.y + 1 < size)
	{
		if (board[elem.y][elem.x] == '.' && board[elem.y][elem.x + 1] == '.' &&
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
		if (board[elem.y][elem.x] == '.' && board[elem.y + 1][elem.x] == '.' &&
			board[elem.y + 2][elem.x] == '.' &&
			board[elem.y + 3][elem.x] == '.')
			return (1);
	}
	return (-1);
}

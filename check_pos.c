/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_pos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 13:06:05 by scluzeau          #+#    #+#             */
/*   Updated: 2016/03/18 15:49:49 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_pos(int type, char **board, unsigned int l, unsigned int c,
				  unsigned int size)
{
	if (type == 1 && c + 1 <= size && l + 2 <= size)
	{
		if (board[l][c] == '.' && board[l][c + 1] == '.' &&
			board[l + 1][c] == '.' && board[l + 2][c] == '.')
			return (1);
	}
	else if (type == 2 && c + 2 <= size && l + 1 <= size)
	{
		if (board[l][c] == '.' && board[l + 1][c] == '.' &&
			board[l + 1][c + 1] == '.' && board[l + 1][c + 2] == '.')
			return (1);
	}
	else if (type == 3 && c + 1 <= size && l + 2 <= size)
	{
		if (board[l][c + 1] == '.' && board[l + 1][c + 1] == '.' &&
			board[l + 2][c] == '.' && board[l + 2][c + 1] == '.')
			return (1);
	}
	else if (type == 4 && c + 2 <= size && l + 1 <= size)
	{
		if (board[l][c] == '.' && board[l][c + 1] == '.' &&
			board[l][c + 2] == '.' && board[l + 1][c + 2] == '.')
			return (1);
	}
	else if (type == 5 && c + 2 <= size && l + 1 <= size)
	{
		if (board[l][c + 1] == '.' && board[l + 1][c] == '.' &&
			board[l + 1][c + 1] == '.' && board[l + 1][c + 2] == '.')
			return (1);
	}
	else if (type == 6 && c + 1 <= size && l + 2 <= size)
	{
		if (board[l][c] == '.' && board[l + 1][c] == '.' &&
			board[l + 1][c + 1] == '.' && board[l + 2][c] == '.')
			return (1);
	}
	else if (type == 7 && c + 2 <= size && l + 1 <= size)
	{
		if (board[l][c] == '.' && board[l][c + 1] == '.' &&
			board[l][c + 2] == '.' && board[l + 1][c + 1] == '.')
			return (1);
	}
	else if (type == 8 && c + 1 <= size && l + 2 <= size)
	{
		if (board[l][c + 1] == '.' && board[l + 1][c] == '.' &&
			board[l + 1][c + 1] == '.' && board[l + 2][c + 1] == '.')
			return (1);
	}
	else if (type == 9 && l + 3 <= size)
	{
		if (board[l][c] == '.' && board[l + 1][c] == '.' &&
			board[l + 2][c] == '.' && board[l + 3][c] == '.')
			return (1);
	}
	else if (type == 10 && c + 3 <= size)
	{
		if (board[l][c] == '.' && board[l][c + 1] == '.' &&
			board[l][c + 2] == '.' && board[l][c + 3] == '.')
			return (1);
	}
	else if (type == 11 && c + 1 <= size && l + 1 <= size)
	{
		if (board[l][c] == '.' && board[l + 1][c] == '.' &&
			board[l][c + 1] == '.' && board[l + 1][c + 1] == '.')
			return (1);
	}
	else if (type == 12 && c + 1 <= size && l + 2 <= size)
	{
		if (board[l][c] == '.' && board[l][c + 1] == '.' &&
			board[l + 1][c + 1] == '.' && board[l + 2][c + 1] == '.')
			return (1);
	}
	else if (type == 13 && c + 2 <= size && l + 1 <= size)
	{
		if (board[l][c] == '.' && board[l][c + 1] == '.' &&
			board[l][c + 2] == '.' && board[l + 1][c] == '.')
			return (1);
	}
	else if (type == 14 && c + 1 <= size && l + 2 <= size)
	{
		if (board[l][c] == '.' && board[l + 1][c] == '.' &&
			board[l + 2][c] == '.' && board[l + 2][c + 1] == '.')
			return (1);
	}
	else if (type == 15 && c + 2 <= size && l + 1 <= size)
	{
		if (board[l][c + 2] == '.' && board[l + 1][c] == '.' &&
			board[l + 1][c + 1] == '.' && board[l + 1][c + 2] == '.')
			return (1);
	}
	else if (type == 16 && c + 1 <= size && l + 2 <= size)
	{
		if (board[l][c + 1] == '.' && board[l + 1][c] == '.' &&
			board[l + 1][c + 1] == '.' && board[l + 2][c] == '.')
			return (1);
	}
	else if (type == 17 && c + 2 <= size && l + 1 <= size)
	{
		if (board[l][c] == '.' && board[l][c + 1] == '.' &&
			board[l + 1][c + 1] == '.' && board[l + 1][c + 2] == '.')
			return (1);
	}
	else if (type == 18 && c + 1 <= size && l + 2 <= size)
	{
		if (board[l][c] == '.' && board[l + 1][c] == '.' &&
			board[l + 1][c + 1] == '.' && board[l + 2][c + 1] == '.')
			return (1);
	}
	else if (type == 19 && c + 2 <= size && l + 1 <= size)
	{
		if (board[l][c + 1] == '.' && board[l][c + 2] == '.' &&
			board[l + 1][c] == '.' && board[l + 1][c + 1] == '.')
			return (1);
	}
	return (-1);
}

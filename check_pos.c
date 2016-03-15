/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_pos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 13:06:05 by scluzeau          #+#    #+#             */
/*   Updated: 2016/03/15 16:20:32 by scluzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_pos(int type, char **board, unsigned int l, unsigned int c)
{
	if (type == 1)
	{
		if (board[l][c] == '.' && board[l][c + 1] == '.' &&
			board[l + 1][c] == '.' && board[l + 2][c] == '.')
			return (1);
	}
	if (type == 2)
	{
		if (board[l][c] == '.' && board[l + 1][c] == '.' &&
			board[l + 1][c + 1] == '.' && board[l + 1][c + 2] == '.')
			return (1);
	}
	if (type == 3)
	{
		if (board[l][c + 1] == '.' && board[l + 1][c + 1] == '.' &&
			board[l + 2][c] == '.' && board[l + 2][c + 1] == '.')
			return (1);
	}
	if (type == 4)
	{
		if (board[l][c] == '.' && board[l][c + 1] == '.' &&
			board[l][c + 2] == '.' && board[l + 1][c + 2] == '.')
			return (1);
	}
	if (type == 5)
	{
		if (board[l][c + 1] == '.' && board[l + 1][c] == '.' &&
			board[l + 1][c + 1] == '.' && board[l + 1][c + 2] == '.')
			return (1);
	}
	if (type == 6)
	{
		if (board[l][c] == '.' && board[l + 1][c] == '.' &&
			board[l + 1][c + 1] == '.' && board[l + 2][c] == '.')
			return (1);
	}
	if (type == 7)
	{
		if (board[l][c] == '.' && board[l][c + 1] == '.' &&
			board[l][c + 2] == '.' && board[l + 1][c + 1] == '.')
			return (1);
	}
	if (type == 8)
	{
		if (board[l][c + 1] == '.' && board[l + 1][c] == '.' &&
			board[l + 1][c + 1] == '.' && board[l + 2][c + 1] == '.')
			return (1);
	}
	if (type == 9)
	{
		if (board[l][c] == '.' && board[l + 1][c] == '.' &&
			board[l + 2][c] == '.' && board[l + 3][c] == '.')
			return (1);
	}
	if (type == 10)
	{
		if (board[l][c] == '.' && board[l][c + 1] == '.' &&
			board[l][c + 2] == '.' && board[l][c + 3] == '.')
			return (1);
	}
	if (type == 11)
	{
		if (board[l][c] == '.' && board[l + 1][c] == '.' &&
			board[l][c + 1] == '.' && board[l + 1][c + 1] == '.')
			return (1);
	}
	if (type == 12)
	{
		if (board[l][c] == '.' && board[l][c + 1] == '.' &&
			board[l + 1][c + 1] == '.' && board[l + 2][c + 1] == '.')
			return (1);
	}
	if (type == 13)
	{
		if (board[l][c] == '.' && board[l][c + 1] == '.' &&
			board[l][c + 2] == '.' && board[l + 1][c] == '.')
			return (1);
	}
	if (type == 14)
	{
		if (board[l][c] == '.' && board[l + 1][c] == '.' &&
			board[l + 2][c] == '.' && board[l + 2][c + 1] == '.')
			return (1);
	}
	if (type == 15)
	{
		if (board[l][c + 2] == '.' && board[l + 1][c] == '.' &&
			board[l + 1][c + 1] == '.' && board[l + 1][c + 2] == '.')
			return (1);
	}
	if (type == 16)
	{
		if (board[l][c + 1] == '.' && board[l + 1][c] == '.' &&
			board[l + 1][c + 1] == '.' && board[l + 2][c] == '.')
			return (1);
	}
	if (type == 17)
	{
		if (board[l][c] == '.' && board[l][c + 1] == '.' &&
			board[l + 1][c + 1] == '.' && board[l + 1][c + 2] == '.')
			return (1);
	}
	if (type == 18)
	{
		if (board[l][c] == '.' && board[l + 1][c] == '.' &&
			board[l + 1][c + 1] == '.' && board[l + 2][c + 1] == '.')
			return (1);
	}
	if (type == 19)
	{
		if (board[l][c + 1] == '.' && board[l][c + 2] == '.' &&
			board[l + 1][c] == '.' && board[l + 1][c + 1] == '.')
			return (1);
	}
	return (-1);
}

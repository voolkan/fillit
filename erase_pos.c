/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_pos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theherbr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/08 15:09:26 by theherbr          #+#    #+#             */
/*   Updated: 2016/04/08 15:50:39 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**erase_pos(int type, char **board, unsigned int l, unsigned int c)
{
	if (type == 1)
	{
		board[l][c] = '.';
		board[l][c + 1] = '.';
		board[l + 1][c] = '.';
		board[l + 2][c] = '.';
	}
	if (type == 2)
	{
		board[l][c] = '.';
		board[l + 1][c] = '.';
		board[l + 1][c + 1] = '.';
		board[l + 1][c + 2] = '.';
	}
	if (type == 3)
	{
		board[l][c + 1] = '.';
		board[l + 1][c + 1] = '.';
		board[l + 2][c] = '.';
		board[l + 2][c + 1] = '.';
	}
	if (type == 4)
	{
		board[l][c] = '.';
		board[l][c + 1] = '.';
		board[l][c + 2] = '.';
		board[l + 1][c + 2] = '.';
	}
	if (type == 5)
	{
		board[l][c + 1] = '.';
		board[l + 1][c] = '.';
		board[l + 1][c + 1] = '.';
		board[l + 1][c + 2] = '.';
	}
	if (type == 6)
	{
		board[l][c] = '.';
		board[l + 1][c] = '.';
		board[l + 1][c + 1] = '.';
		board[l + 2][c] = '.';
	}
	if (type == 7)
	{
		board[l][c] = '.';
		board[l][c + 1] = '.';
		board[l][c + 2] = '.';
		board[l + 1][c + 1] = '.';
	}
	if (type == 8)
	{
		board[l][c + 1] = '.';
		board[l + 1][c] = '.';
		board[l + 1][c + 1] = '.';
		board[l + 2][c + 1] = '.';
	}
	if (type == 9)
	{
		board[l][c] = '.';
		board[l + 1][c] = '.';
		board[l + 2][c] = '.';
		board[l + 3][c] = '.';
	}
	if (type == 10)
	{
		board[l][c] = '.';
		board[l][c + 1] = '.';
		board[l][c + 2] = '.';
		board[l][c + 3] = '.';
	}
	if (type == 11)
	{
		board[l][c] = '.';
		board[l + 1][c] = '.';
		board[l][c + 1] = '.';
		board[l + 1][c + 1] = '.';
	}
	if (type == 12)
	{
		board[l][c] = '.';
		board[l][c + 1] = '.';
		board[l + 1][c + 1] = '.';
		board[l + 2][c + 1] = '.';
	}
	if (type == 13)
	{
		board[l][c] = '.';
		board[l][c + 1] = '.';
		board[l][c + 2] = '.';
		board[l + 1][c] = '.';
	}
	if (type == 14)
	{
		board[l][c] = '.';
		board[l + 1][c] = '.';
		board[l + 2][c] = '.';
		board[l + 2][c + 1] = '.';
	}
	if (type == 15)
	{
		board[l][c + 2] = '.';
		board[l + 1][c] = '.';
		board[l + 1][c + 1] = '.';
		board[l + 1][c + 2] = '.';
	}
	if (type == 16)
	{
		board[l][c + 1] = '.';
		board[l + 1][c] = '.';
		board[l + 1][c + 1] = '.';
		board[l + 2][c] = '.';
	}
	if (type == 17)
	{
		board[l][c] = '.';
		board[l][c + 1] = '.';
		board[l + 1][c + 1] = '.';
		board[l + 1][c + 2] = '.';
	}
	if (type == 18)
	{
		board[l][c] = '.';
		board[l + 1][c] = '.';
		board[l + 1][c + 1] = '.';
		board[l + 2][c + 1] = '.';
	}
	if (type == 19)
	{
		board[l][c + 1] = '.';
		board[l][c + 2] = '.';
		board[l + 1][c] = '.';
		board[l + 1][c + 1] = '.';
	}
	return (board);
}

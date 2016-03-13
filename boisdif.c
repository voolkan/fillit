/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boisdif.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theherbr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 17:07:46 by theherbr          #+#    #+#             */
/*   Updated: 2016/03/13 18:13:58 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**fill_pos(int type, char **board, unsigned int l, unsigned int c, char letter)
{
	if (type == 1)
	{
		board[l][c] = letter;
		board[l][c + 1] = letter;
		board[l + 1][c] = letter;
		board[l + 2][c] = letter;
	}
	if (type == 2)
	{
		board[l][c] = letter;
		board[l + 1][c] = letter;
		board[l + 1][c + 1] = letter;
		board[l + 1][c + 2] = letter;
	}
	if (type == 3)
	{
		board[l][c + 1] = letter;
		board[l + 1][c + 1] = letter;
		board[l + 2][c] = letter;
		board[l + 2][c + 1] = letter;
	}
	if (type == 4)
	{
		board[l][c] = letter;
		board[l][c + 1] = letter;
		board[l][c + 2] = letter;
		board[l + 1][c + 2] = letter;
	}
	if (type == 5)
	{
		board[l][c + 1] = letter;
		board[l + 1][c] = letter;
		board[l + 1][c + 1] = letter;
		board[l + 1][c + 2] = letter;
	}
	if (type == 6)
	{
		board[l][c] = letter;
		board[l + 1][c] = letter;
		board[l + 1][c + 1] = letter;
		board[l + 2][c] = letter;
	}
	if (type == 7)
	{
		board[l][c] = letter;
		board[l][c + 1] = letter;
		board[l][c + 2] = letter;
		board[l + 1][c + 1] = letter;
	}
	if (type == 8)
	{
		board[l][c + 1] = letter;
		board[l + 1][c] = letter;
		board[l + 1][c + 1] = letter;
		board[l + 2][c + 1] = letter;
	}
	if (type == 9)
	{
		board[l][c] = letter;
		board[l + 1][c] = letter;
		board[l + 2][c] = letter;
		board[l + 3][c] = letter;
	}
	if (type == 10)
	{
		board[l][c] = letter;
		board[l][c + 1] = letter;
		board[l][c + 2] = letter;
		board[l][c + 3] = letter;
	}
	if (type == 11)
	{
		board[l][c] = letter;
		board[l + 1][c] = letter;
		board[l][c + 1] = letter;
		board[l + 1][c + 1] = letter;
	}
	if (type == 12)
	{
		board[l][c] = letter;
		board[l][c + 1] = letter;
		board[l + 1][c + 1] = letter;
		board[l + 2][c + 1] = letter;
	}
	if (type == 13)
	{
		board[l][c] = letter;
		board[l][c + 1] = letter;
		board[l][c + 2] = letter;
		board[l + 1][c] = letter;
	}
	if (type == 14)
	{
		board[l][c] = letter;
		board[l + 1][c] = letter;
		board[l + 2][c] = letter;
		board[l + 2][c + 1] = letter;
	}
	if (type == 15)
	{
		board[l][c + 2] = letter;
		board[l + 1][c] = letter;
		board[l + 1][c + 1] = letter;
		board[l + 1][c + 2] = letter;
	}
	if (type == 16)
	{
		board[l][c + 1] = letter;
		board[l + 1][c] = letter;
		board[l + 1][c + 1] = letter;
		board[l + 2][c] = letter;
	}
	if (type == 17)
	{
		board[l][c] = letter;
		board[l][c + 1] = letter;
		board[l + 1][c + 1] = letter;
		board[l + 1][c + 2] = letter;
	}
	if (type == 18)
	{
		board[l][c] = letter;
		board[l + 1][c] = letter;
		board[l + 1][c + 1] = letter;
		board[l + 2][c + 1] = letter;
	}
	if (type == 19)
	{
		board[l][c + 1] = letter;
		board[l][c + 2] = letter;
		board[l + 1][c] = letter;
		board[l + 1][c + 1] = letter;
	}
	return (board);
}

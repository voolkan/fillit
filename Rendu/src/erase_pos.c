/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_pos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theherbr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/08 15:09:26 by theherbr          #+#    #+#             */
/*   Updated: 2016/05/01 15:58:48 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	erase_pos79(int type, char **board, unsigned int l, unsigned int c)
{
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
}

void	erase_pos1012(int type, char **board, unsigned int l, unsigned int c)
{
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
}

void	erase_pos1315(int type, char **board, unsigned int l, unsigned int c)
{
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
}

void	erase_pos1618(int type, char **board, unsigned int l, unsigned int c)
{
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
}

void	erase_pos(struct s_piece elem, char **board)
{
	if (elem.type < 4)
		erase_pos13(elem.type, board, elem.y, elem.x);
	else if (elem.type < 7)
		erase_pos46(elem.type, board, elem.y, elem.x);
	else if (elem.type < 10)
		erase_pos79(elem.type, board, elem.y, elem.x);
	else if (elem.type < 13)
		erase_pos1012(elem.type, board, elem.y, elem.x);
	else if (elem.type < 16)
		erase_pos1315(elem.type, board, elem.y, elem.x);
	else if (elem.type < 19)
		erase_pos1618(elem.type, board, elem.y, elem.x);
	else if (elem.type == 19)
	{
		board[elem.y][elem.x + 1] = '.';
		board[elem.y][elem.x + 2] = '.';
		board[elem.y + 1][elem.x] = '.';
		board[elem.y + 1][elem.x + 1] = '.';
	}
}

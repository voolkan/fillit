/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_pos.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theherbr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/08 15:09:35 by theherbr          #+#    #+#             */
/*   Updated: 2016/04/27 19:47:00 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	fill_pos8(struct s_piece elem, char **board, char letter)
{
	if (elem.type == 8)
	{
		board[elem.y][elem.x + 1] = letter;
		board[elem.y + 1][elem.x] = letter;
		board[elem.y + 1][elem.x + 1] = letter;
		board[elem.y + 2][elem.x + 1] = letter;
	}
	if (elem.type == 9)
	{
		board[elem.y][elem.x] = letter;
		board[elem.y + 1][elem.x] = letter;
		board[elem.y + 2][elem.x] = letter;
		board[elem.y + 3][elem.x] = letter;
	}
	if (elem.type == 10)
	{
		board[elem.y][elem.x] = letter;
		board[elem.y][elem.x + 1] = letter;
		board[elem.y][elem.x + 2] = letter;
		board[elem.y][elem.x + 3] = letter;
	}
}

void	fill_pos11(struct s_piece elem, char **board, char letter)
{
	if (elem.type == 11)
	{
		board[elem.y][elem.x] = letter;
		board[elem.y + 1][elem.x] = letter;
		board[elem.y][elem.x + 1] = letter;
		board[elem.y + 1][elem.x + 1] = letter;
	}
	if (elem.type == 12)
	{
		board[elem.y][elem.x] = letter;
		board[elem.y][elem.x + 1] = letter;
		board[elem.y + 1][elem.x + 1] = letter;
		board[elem.y + 2][elem.x + 1] = letter;
	}
	if (elem.type == 13)
	{
		board[elem.y][elem.x] = letter;
		board[elem.y][elem.x + 1] = letter;
		board[elem.y][elem.x + 2] = letter;
		board[elem.y + 1][elem.x] = letter;
	}
}

void	fill_pos14(struct s_piece elem, char **board, char letter)
{
	if (elem.type == 14)
	{
		board[elem.y][elem.x] = letter;
		board[elem.y + 1][elem.x] = letter;
		board[elem.y + 2][elem.x] = letter;
		board[elem.y + 2][elem.x + 1] = letter;
	}
	if (elem.type == 15)
	{
		board[elem.y][elem.x + 2] = letter;
		board[elem.y + 1][elem.x] = letter;
		board[elem.y + 1][elem.x + 1] = letter;
		board[elem.y + 1][elem.x + 2] = letter;
	}
	if (elem.type == 16)
	{
		board[elem.y][elem.x + 1] = letter;
		board[elem.y + 1][elem.x] = letter;
		board[elem.y + 1][elem.x + 1] = letter;
		board[elem.y + 2][elem.x] = letter;
	}
}

void	fill_pos17(struct s_piece elem, char **board, char letter)
{
	if (elem.type == 17)
	{
		board[elem.y][elem.x] = letter;
		board[elem.y][elem.x + 1] = letter;
		board[elem.y + 1][elem.x + 1] = letter;
		board[elem.y + 1][elem.x + 2] = letter;
	}
	if (elem.type == 18)
	{
		board[elem.y][elem.x] = letter;
		board[elem.y + 1][elem.x] = letter;
		board[elem.y + 1][elem.x + 1] = letter;
		board[elem.y + 2][elem.x + 1] = letter;
	}
	if (elem.type == 19)
	{
		board[elem.y][elem.x + 1] = letter;
		board[elem.y][elem.x + 2] = letter;
		board[elem.y + 1][elem.x] = letter;
		board[elem.y + 1][elem.x + 1] = letter;
	}
}

void	fill_pos(struct s_piece elem, char **board, char letter)
{
	if (elem.type == 1)
	{
		board[elem.y][elem.x] = letter;
		board[elem.y][elem.x + 1] = letter;
		board[elem.y + 1][elem.x] = letter;
		board[elem.y + 2][elem.x] = letter;
	}
	else if (elem.type < 5)
		fill_pos2(elem, board, letter);
	else if (elem.type < 8)
		fill_pos5(elem, board, letter);
	else if (elem.type < 11)
		fill_pos8(elem, board, letter);
	else if (elem.type < 14)
		fill_pos11(elem, board, letter);
	else if (elem.type < 17)
		fill_pos14(elem, board, letter);
	else
		fill_pos17(elem, board, letter);
}

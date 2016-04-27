/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_pos2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theherbr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/27 19:45:27 by theherbr          #+#    #+#             */
/*   Updated: 2016/04/27 19:47:01 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	fill_pos2(struct s_piece elem, char **board, char letter)
{
	if (elem.type == 2)
	{
		board[elem.y][elem.x] = letter;
		board[elem.y + 1][elem.x] = letter;
		board[elem.y + 1][elem.x + 1] = letter;
		board[elem.y + 1][elem.x + 2] = letter;
	}
	if (elem.type == 3)
	{
		board[elem.y][elem.x + 1] = letter;
		board[elem.y + 1][elem.x + 1] = letter;
		board[elem.y + 2][elem.x] = letter;
		board[elem.y + 2][elem.x + 1] = letter;
	}
	if (elem.type == 4)
	{
		board[elem.y][elem.x] = letter;
		board[elem.y][elem.x + 1] = letter;
		board[elem.y][elem.x + 2] = letter;
		board[elem.y + 1][elem.x + 2] = letter;
	}
}

void	fill_pos5(struct s_piece elem, char **board, char letter)
{
	if (elem.type == 5)
	{
		board[elem.y][elem.x + 1] = letter;
		board[elem.y + 1][elem.x] = letter;
		board[elem.y + 1][elem.x + 1] = letter;
		board[elem.y + 1][elem.x + 2] = letter;
	}
	if (elem.type == 6)
	{
		board[elem.y][elem.x] = letter;
		board[elem.y + 1][elem.x] = letter;
		board[elem.y + 1][elem.x + 1] = letter;
		board[elem.y + 2][elem.x] = letter;
	}
	if (elem.type == 7)
	{
		board[elem.y][elem.x] = letter;
		board[elem.y][elem.x + 1] = letter;
		board[elem.y][elem.x + 2] = letter;
		board[elem.y + 1][elem.x + 1] = letter;
	}
}

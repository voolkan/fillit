/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_pos2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theherbr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/27 19:42:33 by theherbr          #+#    #+#             */
/*   Updated: 2016/04/27 19:44:26 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	erase_pos13(int type, char **board, unsigned int l, unsigned int c)
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
}

void	erase_pos46(int type, char **board, unsigned int l, unsigned int c)
{
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
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_pos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theherbr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/08 15:09:26 by theherbr          #+#    #+#             */
/*   Updated: 2016/04/25 19:22:23 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**erase_pos13(int type, char **board, unsigned int l, unsigned int c)
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

char	**erase_pos46(int type, char **board, unsigned int l, unsigned int c)
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

char	**erase_pos79(int type, char **board, unsigned int l, unsigned int c)
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

char	**erase_pos1012(int type, char **board, unsigned int l, unsigned int c)
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

char	**erase_pos1315(int type, char **board, unsigned int l, unsigned int c)
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

char	**erase_pos1618(int type, char **board, unsigned int l, unsigned int c)
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

char	**erase_pos(int type, char **board, unsigned int l, unsigned int c)
{
	if (type < 4)
		erase_pos13(type, board, l, c);
	else if (type < 7)
		erase_pos46(type, board, l, c);
	else if (type < 10)
		erase_pos79(type, board, l, c);
	else if (type < 13)
		erase_pos1012(type, board, l, c);
	else if (type < 16)
		erase_pos1315(type, board, l, c);
	else if (type < 19)
		erase_pos1618(type, board, l, c);
	else if (type == 19)
	{
		board[l][c + 1] = '.';
		board[l][c + 2] = '.';
		board[l + 1][c] = '.';
		board[l + 1][c + 1] = '.';
	}
	return (board);
}

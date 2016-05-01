/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_board_from_file.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/17 14:32:33 by scluzeau          #+#    #+#             */
/*   Updated: 2016/05/01 16:49:58 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "fillit.h"

#define BUFF_SIZE 21

static size_t	count_chars(char *path)
{
	size_t	total_chars;
	int		fd;
	ssize_t	bytes_count;
	char	*buffer;

	total_chars = 0;
	fd = open(path, O_RDONLY);
	if (fd < 0)
		error();
	buffer = (char *)ft_memalloc(sizeof(char) * BUFF_SIZE);
	if (!buffer)
		error();
	bytes_count = 1;
	while (bytes_count > 0)
	{
		bytes_count = read(fd, buffer, BUFF_SIZE);
		total_chars += bytes_count;
	}
	if (bytes_count < 0)
		error();
	close(fd);
	ft_memdel((void **)&buffer);
	return (total_chars);
}

static size_t	cpy_chars(char *path, char *board)
{
	int		fd;
	ssize_t	bytes_count;
	char	buffer[BUFF_SIZE + 1];
	size_t	i;

	i = 0;
	bytes_count = 1;
	fd = open(path, O_RDONLY);
	if (fd < 0)
		error();
	while (bytes_count > 0)
	{
		bytes_count = read(fd, buffer, BUFF_SIZE);
		if (bytes_count > 0)
		{
			buffer[bytes_count] = '\0';
			ft_strcpy(&board[i * (BUFF_SIZE)], buffer);
			i++;
		}
	}
	close(fd);
	return (i);
}

char			*get_board_from_file(char *path, int *nbr_pieces)
{
	char	*board;
	size_t	total_chars;

	total_chars = count_chars(path);
	*nbr_pieces = 0;
	board = (char *)ft_memalloc(sizeof(char) * (total_chars + 1));
	if (!board)
		error();
	*nbr_pieces = cpy_chars(path, board);
	if (nbr_pieces == 0)
		error();
	board[total_chars] = '\0';
	return (board);
}

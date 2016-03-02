/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_board_from_file.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/17 14:32:33 by scluzeau          #+#    #+#             */
/*   Updated: 2016/03/02 12:15:55 by scluzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "fillit.h"

#define BUFF_SIZE 21

static size_t	count_chars(char *path)
{
	size_t 	total_chars;
	int		fd;
	ssize_t	bytes_count;
	char	*buffer;

	total_chars = 0;
	// On ouvre le fichier 'path'
	fd = open(path, O_RDONLY);
	// Si le fichier n'existe pas ou n'est pas accessible en lecture
	if (fd < 0)
		error("file not found or not readable\n");
	// On alloue l'espace memoire necessaire au buffer
	buffer = (char *)ft_memalloc(sizeof(char) * BUFF_SIZE);
	if (!buffer)
		error("can't allocate memory for buffer\n");
	// Boucle de lecture du fichier
	bytes_count = 1;
	while (bytes_count > 0)
	{
		// On lit BUFF_SIZE caracteres dans fd
		// bytes_count vaudra le nombre de caracteres lus
		bytes_count = read(fd, buffer, BUFF_SIZE);
		total_chars += bytes_count;
	}
	if (bytes_count < 0)
		error("file read error");
	// On ferme le fichier
	close(fd);
	// On libere la memoire
	ft_memdel((void **)&buffer);
	return(total_chars);
}

static size_t		cpy_chars(char *path, char *board)
{
	int		fd;
	ssize_t	bytes_count;
	char	*buffer;
	size_t	i;

	i = 0;
	bytes_count = 1;
	// On ouvre le fichier 'path'
	fd = open(path, O_RDONLY);
	// Si le fichier n'existe pas ou n'est pas accessible en lecture
	if (fd < 0)
		error("file not found or not readable\n");
	// On alloue l'espace memoire necessaire au buffer
	buffer = (char *)ft_memalloc(sizeof(char) * BUFF_SIZE);
	if (!buffer)
		error("can't allocate memory for buffer\n");
	// Boucle de lecture du fichier
	while (bytes_count > 0)
	{
		// On lit BUFF_SIZE caracteres dans fd
		// bytes_count vaudra le nombre de caracteres lus
		bytes_count = read(fd, buffer, BUFF_SIZE);
		if (bytes_count > 0)
		{
			ft_strcpy(&board[i * BUFF_SIZE], buffer);
			i++;
		}
	}
	// On ferme le fichier
	close(fd);
	// On libere la memoire
	ft_memdel((void **)&buffer);
	return (i);
}

char		*get_board_from_file(char *path, int *nbr_pieces)
{
	char	*board;
	size_t	total_chars;

	// Initialisations
	// On recupere le nombre de caracteres dans le fichier
	total_chars = count_chars(path);
	*nbr_pieces = 0;
	// On alloue un espace memoire de la taille du nombre de
	// caracteres + 1
	board = (char *)ft_memalloc(sizeof(char) * (total_chars + 1));
	if (!board)
		error("can't allocate memory for board\n");
	*nbr_pieces = cpy_chars(path, board);
	board[total_chars] = '\0';
	// On libere la memoire
	//ft_memdel((void **)&board);
	return (board);
}

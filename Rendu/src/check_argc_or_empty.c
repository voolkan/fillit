/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argc_or_empty.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theherbr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 18:40:02 by theherbr          #+#    #+#             */
/*   Updated: 2016/05/10 18:42:34 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	check_argc_or_empty(int argc, char *path)
{
	int		fd;
	char	buffer[1];
	ssize_t	read_ret;

	if (argc != 2)
	{
		ft_putendl("usage: fillit input_file");
		exit(1);
	}
	fd = open(path, O_RDONLY);
	read_ret = read(fd, buffer, 1);
	close(fd);
	if (read_ret == 0)
		error();
}

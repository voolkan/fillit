/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_empty_file.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theherbr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 17:29:44 by theherbr          #+#    #+#             */
/*   Updated: 2016/05/10 18:15:26 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	check_empty_file(char *path)
{
	int		fd;
	char	buffer[1];
	ssize_t	read_ret;

	fd = open(path, O_RDONLY);
	read_ret = read(fd, buffer, 1);
	close(fd);
	if (read_ret == 0)
		error();
}

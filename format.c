/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 15:55:55 by scluzeau          #+#    #+#             */
/*   Updated: 2016/03/10 16:49:25 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_signs(char *s)
{
	unsigned int	diez;
	unsigned int	point;
	unsigned int	ret;
	unsigned int	i;

	i = 0;
	diez = 0;
	point = 0;
	ret = 0;
	while (i < 20)
	{
		diez += (s[i] == '#') ? 1 : 0;
		point += (s[i] == '.') ? 1 : 0;
		ret += (s[i] == '\n') ? 1 : 0;
		i++;
	}
	if (diez != 4 || point != 12 || ret != 4)
		return (-1);

	if (s[i] == '\n' || s[i] == '\0')
		return (0);
	return (-1);
}

int		check_nl(char *s)
{
	if (s[4] != '\n' || s[9] != '\n' || s[14] != '\n' || s[19] != '\n')
		return (-1);
	return (0);
}

void	error(char *str)
{
	ft_putstr(str);
	exit (1);
}

void	format(char *board)
{
	if (check_signs(board) < 0)
		error("error(error pieces)\n");
	if (check_nl(board) < 0)
		error("error(fuck nl)\n");
//	ft_putstr("end\n");
}

void	display_usage(void)
{
	ft_putendl("usage: fillit input_file");
	exit (1);
}

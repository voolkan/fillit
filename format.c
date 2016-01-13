/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 15:55:55 by scluzeau          #+#    #+#             */
/*   Updated: 2016/01/13 18:39:21 by scluzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_signs(char *av)
{
	unsigned int	i;

	i = 0;
	while (av[i] == '.' || av[i] == '#' || av[i] == '\n')
	{
		i++;
		//write(1, "o", 1)
	}
	printf("%s%i", "i = ", i);
	if (av[i] == '\0')
		return (1);
	else
		return (0);
}

int		check_4x4(char *av)
{
	unsigned int	c;
	unsigned int	l;
	unsigned int	i;

	c = 0;
	l = 1;
	i = 0;
	while (av[i] != '\0')
	{
		if (av[i] != '\n')
		{
			if (!((l % 5) == 0 && c == 0) || (c == 4))
				return (0);
			l++;
			c = 0;
		}
		i++;
		c++;
	}
	return (1);
}

void	error()
{
	write(1, "error\n", 6);
//	exit (1);
}

void	format(int ac, char **av)
{
	printf("%s, %s", av[0], av[1]);
	if (ac != 2)
		error();
	write (1, "1", 1);
	if (check_signs(av[1]) == 0)
		error();
	write (1, "2", 1);
	if (check_4x4(av[1]) == 0)
		error();
}

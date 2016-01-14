/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 15:55:55 by scluzeau          #+#    #+#             */
/*   Updated: 2016/01/14 17:58:20 by scluzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_signs(char *s, int i)
{
	unsigned int	c;
	unsigned int	diez;
	unsigned int	point;
	unsigned int	ret;

	c = 0;
	diez = 0;
	point = 0;
	ret = 0;
	while (c < 20)
	{
		diez += (s[i] == '#') ? 1 : 0;
		point += (s[i] == '.') ? 1 : 0;
		ret += (s[i] == '\n') ? 1 : 0;
		c++;
		i++;
	}
	if (!(diez == 4 && point == 12 && ret == 4))
		return (0);
	i++;
	if (s[i] == '\n')
		return (1);
	else if (s[i] == '\0')
		return (2);
	return (0);
}

int		check_nl(char *s, unsigned int i)
{
	unsigned int c;

	c = 0;
	while (c < 20)
	{
		if (s[i] == '\n')
		{
			if (c % 5 != 0)
				return (0);
		}
		c++;
		i++;
	}
	return (1);
}

void	error()
{
	write(1, "error\n", 6);
//	exit (1);
}

void	format(int ac, char *board)
{
	unsigned int	i;

	i = 0;
	if (ac != 2)
		error();
	while (check_signs(board, i * 20) == 1)
	{
		i++;
		if (check_nl(board, i * 20) == 0)
			error();
	}
	printf("%s\n", "error nl");
	if (check_signs(board, i * 20) == 0)
	{
		printf("%i\n", i);
		error();
	}
	printf("%s\n", "end format");
	
}

int		main()
{
	char *s = ".###\n...#\n....\n....\n";
	printf("%s", s);
	format(2, s);
	return (0);
}

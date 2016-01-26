/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 15:55:55 by scluzeau          #+#    #+#             */
/*   Updated: 2016/01/26 17:49:44 by scluzeau         ###   ########.fr       */
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
	printf("%i\n%i\n%i\n", diez, point, ret);
	if (diez != 4 || point != 12 || ret != 4)
		return (-1);
//	printf("%i: %c\n", i, s[i -1]);

	if (s[i] == '\n' || s[i] == '\0')
		return (0);
	return (-1);
}

int		check_nl(char *s, unsigned int i)
{
	unsigned int c;

	c = 0;
	i = 0;
	while (c < 20)
	{
		if (s[i] == '\n')
		{
			printf("%s%i\n", "check nl : entered if with c = ", c);
			if (c != 5 && c != 10 && c != 15 && c != 20)
				return (-1);
		}
		c++;
		i++;
	}
	return (0);
}

void	error()
{
	write(1, "error\n", 6);
//	exit (1);
}

void	format(int ac, char *board)
{
	int result;
	//unsigned int	i;

	//i = 0;
	if (ac != 2)
		printf("error(1)");
	result = check_signs(board, 0);
	if (result == 0)
	{
		//i++;
		if (check_nl(board, 20) == -1)
			printf("error(2)");
	}
	if (result == -1)
	{
	//	printf("%i\n", i);
		printf("error(3)");
	}
	printf("%s\n", "end");
	
}

int		main()
{
//	int offset;
//	char *s = ".###\n...#\n....\n....\n\n####\n....\n....\n....\n";
//	char *s = ".###\n...#\n....\n....\n";
//	char *s = "####\n...#\n....\n....\n";
	char *s = ".###.\n..#\n....\n....\n";
	printf("%s", s);
//	offset = 0;
//	while()
//	{
//		format(2, &s[offset]);
//		offset = offset + 21;
//	}
	format(2, s);
	return (0);
}

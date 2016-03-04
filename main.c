/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/04 15:41:48 by scluzeau          #+#    #+#             */
/*   Updated: 2016/03/04 17:36:17 by scluzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	char 	*s;
	char	**tab;
	int		nbr_pieces;
	int		i;
	int		c;
	int		num_pieces;
	int		*tab_pieces;

	tab_pieces = NULL;
	c = 0;
	if (argc != 2)
		display_usage();
	s = get_board_from_file(argv[1], &nbr_pieces);
	i = nbr_pieces;
	tab_pieces = malloc(sizeof(int) * nbr_pieces);
	if(!tab_pieces)
		error("alloc tab_pieces");
	ft_putnbr(nbr_pieces);
	ft_putendl("pieces detectees");
	tab = tabtab(s, nbr_pieces);
	while (c < nbr_pieces)
	{
		format(tab[c]);
		c++;
	}
	c = 0;
	while (c < nbr_pieces)
	{
		num_pieces = check_diez(tab[c]);
		if (num_pieces < 0)
			error("cours forrest");
		tab_pieces[c] = num_pieces;
		ft_putnbr(tab_pieces[c]);
		c++;
	}
	phase_two(tab_pieces);
	return (0);
}

void	phase_two(int *tab_pieces, int nbr_pieces)
{
	unsigned int	size;
	char			**board;

	size = get_minsize(nbr_pieces);
	board = create_board(size);

}

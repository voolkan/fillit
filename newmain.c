/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newmain.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theherbr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/03 17:04:31 by theherbr          #+#    #+#             */
/*   Updated: 2016/04/04 14:47:39 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	char				*board;
	int					type_piece;
	char				letter;
	int					c;
	int					nbr_pieces;
	char				**tab;
	struct s_piece		*tab_pieces;

	tab_pieces = NULL;
	tab_pieces = malloc(nbr_pieces * sizeof(struct s_piece));
	if (!tab_pieces)
		error("alloc tab_pieces");
	if (argc != 2)
		display_usage();
	board = get_board_from_file(argv[1], &nbr_pieces);
	tab = tabtab(board, nbr_pieces);
	c = 0;
	while (c < nbr_pieces)
	{
		format(tab[c]);
		c++;
	}
	c = 0;
	letter = 'A';
	while (c < nbr_pieces)
	{
		type_piece = find_tetri_type(tab[c]);
		if (type_piece < 0)
			error("err tetri type");
		tab_pieces[c].type = type_piece;
		tab_pieces[c].letter = letter;
		letter++;
		c++;
	}
	c = 0;
	while (c < nbr_pieces)
	{
		ft_putnbr(tab_pieces[c].type);
		ft_putchar(tab_pieces[c].letter);
		c++;
	}
//	phase_two(tab_pieces, nbr_pieces);
	return (0);
}

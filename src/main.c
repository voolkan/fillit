/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theherbr <theherbr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/25 00:10:33 by theherbr          #+#    #+#             */
/*   Updated: 2016/04/28 14:01:57 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	char				*raw_board;
	int					c;
	int					nbr_pieces;
	char				**tab;
	struct s_piece		*tab_pieces;

	check_argc(argc);
	raw_board = get_board_from_file(argv[1], &nbr_pieces);
	check_extra_nl(raw_board, nbr_pieces);
	tab = tabtab(raw_board, nbr_pieces);
	c = 0;
	while (c < nbr_pieces)
	{
		check_format(tab[c]);
		c++;
	}
	c = 0;
	tab_pieces = NULL;
	tab_pieces = malloc(nbr_pieces * sizeof(struct s_piece));
	if (!tab_pieces)
		error();
	fill_struct(tab_pieces, nbr_pieces, tab);
	free(raw_board);
	solve(tab_pieces, nbr_pieces);
	return (0);
}

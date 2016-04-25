/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theherbr <theherbr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/25 00:10:33 by theherbr          #+#    #+#             */
/*   Updated: 2016/04/25 20:56:43 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	char				*raw_board;
	char				letter;
	int					c;
	int					nbr_pieces;
	char				**tab;
	struct s_piece		*tab_pieces;

	if (argc != 2)
		display_usage();
	raw_board = get_board_from_file(argv[1], &nbr_pieces);

	if (nbr_pieces == 0)
		error();
//	if (raw_board[nbr_pieces * 20 + 1] != '\0')
//		error();
//	check_extra_nl(raw_board, nbr_pieces);
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
		error("alloc tab_pieces");
	letter = 'A';
	while (c < nbr_pieces)
	{
		tab_pieces[c].type = find_tetri_type(tab[c]);
		tab_pieces[c].letter = letter;
		letter++;
		c++;
	}
	free(raw_board);
//	ft_putendl("part2");
	solve(tab_pieces, nbr_pieces);
	return (0);
}

void	solve(struct s_piece *tab_pieces, int nbr_pieces)
{
	int				tab_i;
	unsigned int	size;
	char			**board;

	tab_i = 0;
	size = get_minsize(nbr_pieces);
	board = create_board(size);
	board = dotify(board, size);
//	ft_putendl("board created with minsize");
	while (backtrack(board, size, tab_pieces, tab_i, nbr_pieces) == 888)
	{
//		ft_putendl("increasing the size !");
		tab_i = 0;
//		ft_putstr("going to free, size =");
//		ft_putnbr(size);
//		ft_putendl(", and this is the board :");
//		print(board, size);
		free_board(board, size);
		size++;
		board = create_board(size);
		board = dotify(board, size);
	}
}

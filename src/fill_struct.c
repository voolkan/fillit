/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theherbr <theherbr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 13:58:53 by theherbr          #+#    #+#             */
/*   Updated: 2016/04/28 15:50:47 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	fill_struct(struct s_piece *tab_pieces, int nbr_pieces, char **tab)
{
	char	letter;
	int		c;

	letter = 'A';
	c = 0;
	while (c < nbr_pieces)
	{
		tab_pieces[c].type = find_tetri_type(tab[c]);
		tab_pieces[c].letter = letter;
		letter++;
		c++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newmain.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theherbr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/03 17:04:31 by theherbr          #+#    #+#             */
/*   Updated: 2016/04/03 17:41:50 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	char	*s;
	int		nbr_pieces;

	if (argc != 2)
		display_usage();
	s = get_board_from_file(argv[1], &nbr_pieces);
	struct s_piece tab_pieces[nbr_pieces];


}

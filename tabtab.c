
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tabtab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/02 12:49:54 by scluzeau          #+#    #+#             */
/*   Updated: 2016/04/06 18:59:58 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**tabtab(char *s, int nbr_pieces)
{
	struct s_piece	*tab_pieces;
	unsigned int	i;

	i = 0;
	tab_pieces = malloc(nbr_pieces * sizeof(s_piece));
	if (!tab_pieces)
		error("alloc tab_pieces");
	while (i < nbr_pieces)
	{
		tab_pieces[i] = ft_strsub(s, (21 * i), 20);
		i++;
	}
	return (tab_pieces);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tabtab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/02 12:49:54 by scluzeau          #+#    #+#             */
/*   Updated: 2016/04/28 15:51:20 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**tabtab(char *s, int nbr_pieces)
{
	char	**tab;
	int		i;

	i = 0;
	tab = (char **)malloc(sizeof(char *) * (nbr_pieces));
	if (!tab)
		error("can't allocate tabtab\n");
	while (i < nbr_pieces)
	{
		tab[i] = ft_strsub(s, (21 * i), 20);
		i++;
	}
	return (tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tabtab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/02 12:49:54 by scluzeau          #+#    #+#             */
/*   Updated: 2016/03/04 11:51:11 by scluzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**tabtab(char *s, int nbr_pieces)
{
	char			**tab;
	unsigned int	i;

	i = 0;
	tab = (char **)malloc(sizeof(char *) * nbr_pieces + 1);
	if (!tab)
		error("can't allocate tabtab\n");
	while (i <= nbr_pieces)
	{
		tab[i] = ft_strsub(s, (21 * i), 20);
		i++;
	}
	return (tab);
}
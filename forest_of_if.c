/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forest_of_if.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 13:51:00 by scluzeau          #+#    #+#             */
/*   Updated: 2016/01/27 15:01:01 by scluzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		forest_of_if(char *s, int i)
{
	if (s[i] == '#' && s[i + 1] == '#' && s[i + 5] == '#' && s[i + 10] == '#')
		return (1);
	if (s[i] == '#' && s[i + 5] == '#' && s[i + 6] == '#' && s[i + 7] == '#')
		return (2);
	if (s[i] == '#' && s[i + 5] == '#' && s[i + 9] == '#' && s[i + 10] == '#')
		return (3);
	if (s[i] == '#' && s[i + 1] == '#' && s[i + 2] == '#' && s[i + 7] == '#')
		return (4);
	if (s[i] == '#' && s[i + 4] == '#' && s[i + 5] == '#' && s[i + 6] == '#')
		return (5);
	if (s[i] == '#' && s[i + 5] == '#' && s[i + 6] == '#' && s[i + 10] == '#')
		return (6);
	if (s[i] == '#' && s[i + 1] == '#' && s[i + 2] == '#' && s[i + 6] == '#')
		return (7);
	if (s[i] == '#' && s[i + 4] == '#' && s[i + 5] == '#' && s[i + 10] == '#')
		return (8);
	if (s[i] == '#' && s[i + 5] == '#' && s[i + 10] == '#' && s[i + 15] == '#')
		return (9);
	if (s[i] == '#' && s[i + 1] == '#' && s[i + 2] == '#' && s[i + 3] == '#')
		return (10);
	if (s[i] == '#' && s[i + 1] == '#' && s[i + 5] == '#' && s[i + 6] == '#')
		return (11);
	return (forest_of_if2(s, i));
}

int		forest_of_if2(char *s, int i)
{
	if (s[i] == '#' && s[i + 1] == '#' && s[i + 6] == '#' && s[i + 11] == '#')
		return (12);
	if (s[i] == '#' && s[i + 1] == '#' && s[i + 2] == '#' && s[i + 5] == '#')
		return (13);
	if (s[i] == '#' && s[i + 5] == '#' && s[i + 10] == '#' && s[i + 11] == '#')
		return (14);
	if (s[i] == '#' && s[i + 3] == '#' && s[i + 4] == '#' && s[i + 5] == '#')
		return (15);
	if (s[i] == '#' && s[i + 4] == '#' && s[i + 5] == '#' && s[i + 9] == '#')
		return (16);
	if (s[i] == '#' && s[i + 1] == '#' && s[i + 6] == '#' && s[i + 7] == '#')
		return (17);
	if (s[i] == '#' && s[i + 5] == '#' && s[i + 6] == '#' && s[i + 11] == '#')
		return (18);
	if (s[i] == '#' && s[i + 1] == '#' && s[i + 4] == '#' && s[i + 5] == '#')
		return (19);
	return (-1);
}

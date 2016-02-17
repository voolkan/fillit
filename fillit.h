/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 17:37:41 by scluzeau          #+#    #+#             */
/*   Updated: 2016/02/17 14:21:46 by scluzeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FILLIT_H__
# define	__FILLIT_H__

# include <unistd.h>
# include <stdlib.h>
# include <libft.h>

int		check_signs(char *s, int i);
int		check_nl(char *av);
void	error();
void	format (char *board);

#endif

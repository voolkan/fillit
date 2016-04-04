/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 17:37:41 by scluzeau          #+#    #+#             */
/*   Updated: 2016/04/04 16:18:06 by theherbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <stdlib.h>
# include <libft.h>

struct			s_piece {
	int				type;
	char			letter;
	unsigned int	x;
	unsigned int	y;
};

int				find_tetri_type(char *s);
int				check_nl(char *av);
int				forest_of_if(char *s, int i);
int				forest_of_if2(char *s, int i);
int				check_diez(char *s);
void			format (char *board);
void			error();					//verif avant rendu
void			display_usage();
char			*get_board_from_file(char *path, int *nbr_pieces);
char			**tabtab(char *s, int nbr_pieces);
void			solve(struct s_pieces *tab_pieces, int nbr_pieces);
unsigned int	get_minsize(unsigned int nbr_pieces);
char			**create_board(unsigned int board_size);
void			print(char **board, unsigned int size);
char			**dotify(char **board, unsigned int size);
char			**fill_pos(int type, char **board, unsigned int l,
					unsigned int c, char letter);
int				check_pos(int type, char **board, unsigned int l,
					unsigned int c, unsigned int size);
char			**bt(char **board, unsigned int size, char letter,
					int *tab_pieces, int tab_i, int nbr_pieces);
void			free_board(char **board, int nbr_pieces);
#endif

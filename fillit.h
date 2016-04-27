/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scluzeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 17:37:41 by scluzeau          #+#    #+#             */
/*   Updated: 2016/04/27 19:46:55 by theherbr         ###   ########.fr       */
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
void			check_format(char *board);
void			check_extra_nl(char *board, int nbr_pieces);
void			error();
void			check_argc(int argc);
char			*get_board_from_file(char *path, int *nbr_pieces);
char			**tabtab(char *s, int nbr_pieces);
unsigned int	get_minsize(unsigned int nbr_pieces);
char			**create_board(unsigned int board_size);
void			print(char **board, unsigned int size);
char			**dotify(char **board, unsigned int size);
void			fill_pos(struct s_piece elem, char **board, char letter);
void			fill_pos2(struct s_piece elem, char **board, char letter);
void			fill_pos5(struct s_piece elem, char **board, char letter);
int				check_pos(struct s_piece elem, char **board, unsigned int size);
void			erase_pos(struct s_piece elem, char **board);
void			erase_pos13(int type, char **board,
							unsigned int l, unsigned int c);
void			erase_pos46(int type, char **board,
							unsigned int l, unsigned int c);
void			free_board(char **board, int nbr_pieces);
void			solve(struct s_piece *tab_pieces, int nbr_pieces);
int				backtrack(char **board, unsigned int size, struct s_piece *tab_pieces, int tab_i, int nbr_pieces);
#endif

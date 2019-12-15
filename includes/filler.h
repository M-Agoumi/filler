/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magoumi <magoumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 07:36:58 by magoumi           #+#    #+#             */
/*   Updated: 2019/12/15 04:11:25 by magoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# include "../libft/libft.h"
# define STDIN	0
# define STDOUT	1

typedef	struct			s_block
{
	char				player;
	char				ai;
	int					max_y;
	int					max_x;
	char				**map;
	int					**priority;
	int					ty;
	int					tx;
	char				**token;
	int					priority_dot;
	int					step_y;
	int					step_x;
	char				*line;
}						t_block;

void					create_priority(t_block *block, int max_y, int max_x);
void					skip_line_plateau(char **line);
void					read_map(t_block *block, int max_y, int max_x);
void					read_token_size(t_block *block);
void					create_priority(t_block *block, int max_y, int max_x);
void					update_priority(t_block *block);
void					player_step(t_block *block);
void					ft_freemem(char **str);

#endif
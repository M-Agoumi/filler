/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magoumi <magoumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 07:36:58 by magoumi           #+#    #+#             */
/*   Updated: 2019/12/04 08:13:07 by magoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# include "../ft_printf/src/libftprintf.h"

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

void			        create_priority(t_block *block, int max_y, int max_x);

#endif
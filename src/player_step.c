/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_step.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magoumi <magoumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 08:37:39 by magoumi           #+#    #+#             */
/*   Updated: 2019/12/16 03:33:50 by magoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

static	short	insert_token(t_block *block, int y, int x)
{
	int			j;
	int			i;
	int			match;

	match = 0;
	j = -1;
	while (++j < block->ty)
	{
		i = -1;
		while (++i < block->tx)
		{
			if (block->token[j][i] == '*')
			{
				if (block->map[j + y][i + x] == (block->player))
				{
					match++;
					if (match > 1)
						return (0);
				}
				else if (block->map[y + j][x + i] == (block->ai))
					return (0);
			}
		}
	}
	return ((match == 1) ? (1) : (0));
}

static	void	update_step(t_block *block, int res, int y, int x)
{
	block->priority_dot = res;
	block->step_y = y;
	block->step_x = x;
}

static void		check_priority(t_block *block, int y, int x)
{
	int			j;
	int			i;
	int			res;

	res = 0;
	j = -1;
	while (++j < block->ty)
	{
		i = -1;
		while (++i < block->tx)
			res += block->priority[j + y][i + x];
	}
	(res < block->priority_dot) ? update_step(block, res, y, x) : 0;
}

void			first_possible(t_block *block)
{
	int i;
	int j;

	j = -1;
	while (++j + (block->ty - 1) < block->max_y)
	{
		i = -1;
		while (++i + (block->tx - 1) < block->max_x)
		{
			if (insert_token(block, j, i))
			{
				block->step_y = j;
				block->step_x = i;
				return ;
			}
		}
	}
}

void			player_step(t_block *block)
{
	int			j;
	int			i;

	j = -1;
	while (++j + (block->ty - 1) < block->max_y)
	{
		i = -1;
		while (++i + (block->tx - 1) < block->max_x)
		{
			if (insert_token(block, j, i))
				check_priority(block, j, i);
		}
	}
	if (!block->step_y && !block->step_x)
		first_possible(block);
	ft_printf("%d %d\n", block->step_y, block->step_x);
}

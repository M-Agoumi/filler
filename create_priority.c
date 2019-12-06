/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_priority.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magoumi <magoumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 08:08:51 by magoumi           #+#    #+#             */
/*   Updated: 2019/12/06 04:17:19 by magoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

// static	void	update(t_block *block, int y, int x)
// {
// 	int			j;
// 	int			i;
// 	int			tmp;

// 	block->priority[y][x] = 0;
// 	j = -1;
// 	while (++j < block->max_y)
// 	{
// 		i = -1;
// 		while (++i < block->max_x)
// 		{
// 			if (block->map[j][i] != block->ai)
// 			{
// 				tmp = ABS(j - y) + ABS(i - x);
// 				block->priority[j][i] = ft_min(tmp, block->priority[j][i]);
// 			}
// 		}
// 	}
// }

// void			update_priority(t_block *block)
// {
// 	int			j;
// 	int			i;

// 	j = 0;
// 	while (j < block->max_y)
// 	{
// 		i = 0;
// 		while (i < block->max_x)
// 		{
// 			if (block->map[j][i] == block->ai)
// 				update(block, j, i);
// 			i++;
// 		}
// 		j++;
// 	}
// 	block->priority_dot = MAX_INT;
// 	block->step_y = 0;
// 	block->step_x = 0;
// }

// void			create_priority(t_block *block, int max_y, int max_x)
// {
// 	int			j;

// 	j = 0;
// 	if (!(block->priority = (int **)malloc(sizeof(int *) * (max_y))))
// 		perror("allocation error");
// 	while (j < max_y)
// 	{
// 		if (!(block->priority[j] = (int *)malloc(sizeof(int) * (max_x))))
// 			perror("allocation error");
// 		j++;
// 	}
// }
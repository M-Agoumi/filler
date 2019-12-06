/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magoumi <magoumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 07:34:56 by magoumi           #+#    #+#             */
/*   Updated: 2019/12/06 04:18:53 by magoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

static	void	init_player(t_block *block)
{
	char		*line;

	get_next_line(0, &line);
	if (!ft_strncmp("$$$ exec p1 :", line, 13))
	{
		block->player = 'O';
		block->ai = 'X';
	}
	else
	{
		block->player = 'X';
		block->ai = 'O';
	}
	ft_strdel(&line);
}

// static	void	read_map_max_size(t_block *block)
// {
// 	int			i;
// 	char		*line;

// 	i = 0;
// 	get_next_line(0, &line);
// 	while (!ft_isdigit(line[i]))
// 		i++;
// 	block->max_y = ft_atoi(&line[i]);
// 	while (ft_isdigit(line[i]))
// 		i++;
// 	while (!ft_isdigit(line[i]))
// 		i++;
// 	block->max_x = ft_atoi(&line[i]);
// 	ft_strdel(&line);
// }

// static	void	create_map(t_block *block, int max_y, int max_x)
// {
// 	int			j;

// 	j = 0;
// 	if (!(block->map = (char **)malloc(sizeof(char *) * (max_y + 1))))
// 		perror("allocation error");
// 	while (j < max_y)
// 	{
// 		if (!(block->map[j] = ft_strnew(max_x + 1)))
// 			perror("allocation error");
// 		j++;
// 	}
// 	(block->map)[j] = NULL;
// }

int main(void)
{
	t_block		block;

	init_player(&block);
	//read_map_max_size(&block);
	//create_map(&block, block.max_y, block.max_x);
	// create_priority(&block, block.max_y, block.max_x);
	ft_putstr("test\n");
	return (0);
}
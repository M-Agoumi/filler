/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachim <ohachim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 07:34:56 by magoumi           #+#    #+#             */
/*   Updated: 2019/12/15 04:58:36 by ohachim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

static	int		init_player(t_block *block)
{
	char		*line;

	if (get_next_line(STDIN, &line) <= 0)
		return (0);
	block->ty = 0;
	block->tx = 0;
	if (!ft_strncmp("$$$ exec p1 :", line, 13))
	{
		block->player = 'O';
		block->ai = 'X';
	}
	else if (!ft_strncmp("$$$ exec p2 :", line, 13))
	{
		block->player = 'X';
		block->ai = 'O';
	}
	else
		return (0);
	ft_strdel(&line);
	return (1);
}

static	void	read_map_max_size(t_block *block)
{
	int			i;
	char		*line;

	i = 0;
	get_next_line(STDIN, &line);
	while (!ft_isdigit(line[i]))
		i++;
	block->max_y = ft_atoi(&line[i]);
	while (ft_isdigit(line[i]))
		i++;
	while (!ft_isdigit(line[i]))
		i++;
	block->max_x = ft_atoi(&line[i]);
	ft_strdel(&line);
}

static	void	create_map(t_block *block, int max_y, int max_x)
{
	int			j;

	j = 0;
	if (!(block->map = (char **)malloc(sizeof(char *) * (max_y + 1))))
		perror("allocation error");
	while (j < max_y)
	{
		if (!(block->map[j] = ft_strnew(max_x + 1)))
			perror("allocation error");
		j++;
	}
	(block->map)[j] = NULL;
}

int				main(void)
{
	t_block		block;

	if (!init_player(&block))
		return (0);
	read_map_max_size(&block);
	create_map(&block, block.max_y, block.max_x);
	create_priority(&block, block.max_y, block.max_x);
	while (get_next_line(STDIN, &block.line) > 0)
	{
		skip_line_plateau(&block.line);
		read_map(&block, block.max_y, block.max_x);
		read_token_size(&block);
		update_priority(&block);
		player_step(&block);
		ft_printf("yo \n");
		ft_freemem(&block.map);
		ft_freememint(&block.priority);
		free(block.priority);
		ft_freemem(&block.token);
		free(block.token);
		free(block.map);
		block.map = NULL;
		block.token = NULL;
		block.priority = NULL;
		ft_printf("yo \n");
	}
	return (0);
}

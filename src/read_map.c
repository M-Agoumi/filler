/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magoumi <magoumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 13:15:11 by magoumi           #+#    #+#             */
/*   Updated: 2019/12/16 03:33:01 by magoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	skip_line_plateau(char **line)
{
	if (!ft_strncmp(*line, "Plateau", 7))
	{
		ft_strdel(line);
		if (!get_next_line(STDIN, line))
			return ;
	}
	ft_strdel(line);
}

void	read_map(t_block *block, int max_y, int max_x)
{
	int		j;
	int		i;
	int		k;
	char	*line;

	j = 0;
	while (j < max_y)
	{
		k = 0;
		if (!get_next_line(STDIN, &line))
			return ;
		while (!ft_strchr(".OXox", line[k]))
			k++;
		i = 0;
		while (i < max_x)
		{
			(block->map)[j][i] = line[k];
			(block->priority)[j][i] = MAX_INT;
			i++;
			k++;
		}
		j++;
		ft_strdel(&line);
	}
}

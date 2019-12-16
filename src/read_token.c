/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_token.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magoumi <magoumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 13:36:41 by magoumi           #+#    #+#             */
/*   Updated: 2019/12/16 03:34:04 by magoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

static void	create_token(char ***token, int ty)
{
	char				*line;
	int					j;

	j = 0;
	if (!(*token = (char **)malloc(sizeof(char *) * (ty + 1))))
		perror("allocation error");
	line = NULL;
	while (j < ty)
	{
		get_next_line(STDIN, &line);
		(*token)[j] = ft_strdup(line);
		j++;
		ft_strdel(&line);
	}
	(*token)[j] = NULL;
}

void		read_token_size(t_block *block)
{
	int					i;
	char				*line;

	i = 0;
	if (get_next_line(STDIN, &line) != -1)
	{
		while (!ft_isdigit(line[i]))
			i++;
		block->ty = ft_atoi(&line[i]);
		while (ft_isdigit(line[i]))
			i++;
		block->tx = ft_atoi(&line[i]);
		while (!ft_isdigit(line[i]))
			i++;
		ft_strdel(&line);
		create_token(&block->token, block->ty);
	}
}

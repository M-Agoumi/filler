/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magoumi <magoumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 02:58:08 by magoumi           #+#    #+#             */
/*   Updated: 2019/12/16 03:32:39 by magoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	ft_freemem(char ***str)
{
	int i;

	i = 0;
	while (str[0][i])
	{
		ft_strdel(&str[0][i]);
		i++;
	}
	free(*str);
	*str = NULL;
}

void	ft_freememint(int ***str)
{
	int i;

	i = 0;
	while (str[0][i])
	{
		ft_intdel(&str[0][i]);
		i++;
	}
	free(*str);
	*str = NULL;
}

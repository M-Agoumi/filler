/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachim <ohachim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 02:58:08 by magoumi           #+#    #+#             */
/*   Updated: 2019/12/15 05:11:31 by ohachim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void    ft_freemem(char ***str)
{
	int i;

	i = 0;
	while(str[0][i])
	{
		ft_strdel(&str[0][i]);
		i++;
	}
}

void    ft_freememint(int ***str)
{
	int i;

	i = 0;
	while(str[0][i])
	{
		ft_intdel(&str[0][i]);
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magoumi <magoumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 23:41:41 by magoumi           #+#    #+#             */
/*   Updated: 2019/12/06 04:26:31 by magoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int main()
{
	char *str;

	str = ft_strdup("test");
	// if (!ft_strncmp(str, str, 2))
	// 	ft_putstr("ok");
	// else
	// 	ft_putstr("Opsi");
	ft_strdel(&str);
	ft_putchar('\n');
	return (0);
}
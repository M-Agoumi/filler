/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachim <ohachim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 18:14:12 by magoumi           #+#    #+#             */
/*   Updated: 2019/12/14 05:37:17 by ohachim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	int		i;
	int	extra;

	extra = 1;
	i = -1;
	if (!ft_strlen(s1))
		return (0);
	s = (char*)malloc(ft_strlen((char*)s1) + extra);
	if (s == NULL)
		return (0);
	while (s1[++i])
		s[i] = (char)(s1[i]);
	s[i] = '\0';
	return (s);
}

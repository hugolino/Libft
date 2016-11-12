/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lines.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/30 12:06:08 by hdecaux           #+#    #+#             */
/*   Updated: 2016/11/12 17:19:05 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_lines(char const *str, char c)
{
	size_t		b;
	size_t		m;
	size_t		i;

	b = 0;
	m = 0;
	i = 0;
	while (str[b])
	{
		if (str[b] != c && i == 0)
		{
			i++;
			m++;
		}
		if (str[b] == c)
			i = 0;
		b++;
	}
	return (m);
}

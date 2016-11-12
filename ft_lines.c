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

	b = 0;
	m = 1;
	while (str[b])
	{
		if (str[b] != c)
			b++;
		if (str[b] == c && str[b + 1] != c)
		{
			b++;
			m++;
		}
		else if (str[b] == c && str[b + 1] == c)
			b++;
	}
	return (m);
}

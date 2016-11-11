/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/30 12:07:28 by hdecaux           #+#    #+#             */
/*   Updated: 2016/11/11 15:14:00 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_char(char const *str, char c, int a)
{
	size_t		w;

	w = 0;
	while (str[a])
	{
		if (str[a] == c)
		{
			a++;
			break ;
		}
		else if (str[a] != c)
		{
			w++;
			a++;
		}
	}
	return (w);
}

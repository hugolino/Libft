/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/14 11:52:02 by hdecaux           #+#    #+#             */
/*   Updated: 2015/10/14 13:04:18 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memchr(const void *s, int c, size_t n)
{
	const char	*tmp;
	size_t		i;

	tmp = (const char*)s;
	i = 0;
	while (i < n)
	{
		if (tmp[i] == (char)c)
			return ((void*)&s[i]);
		else
			i++;
	}
	return (NULL);
}

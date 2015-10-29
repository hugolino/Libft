/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/14 08:14:53 by hdecaux           #+#    #+#             */
/*   Updated: 2015/10/28 08:41:46 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lendst;
	size_t	lensrc;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (lendst >= size)
		return (lensrc + size);
	if (size > (lendst + lensrc))
	{
		ft_memcpy(&dst[lendst], src, lensrc);
		i = lendst + lensrc;
	}
	else
	{
		ft_memcpy(&dst[lendst], src, size - lendst);
		i = size - 1;
	}
	dst[i] = '\0';
	return (lendst + lensrc);
}

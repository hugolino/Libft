/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/14 08:14:53 by hdecaux           #+#    #+#             */
/*   Updated: 2015/10/14 10:18:51 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t lendst;
	size_t lensrc;
	size_t i;

	i = 0;
	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	if (size < lendst)
		return (lensrc + lendst);
	ft_strcat(dst, src);
	while (dst[i] && (i < size))
		i++;
	return (i);
}

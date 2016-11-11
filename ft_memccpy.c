/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/14 10:41:39 by hdecaux           #+#    #+#             */
/*   Updated: 2015/10/14 11:24:44 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*srctmp;
	char	*dsttmp;

	i = 0;
	srctmp = (char*)src;
	dsttmp = (char*)dst;
	while (i < n && srctmp[i] != c)
	{
		dsttmp[i] = srctmp[i];
		i++;
	}
	if (i != n && srctmp[i] == c)
	{
		dsttmp[i] = srctmp[i];
		i++;
		return (&dst[i]);
	}
	return (NULL);
}

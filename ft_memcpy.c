/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/14 10:37:07 by hdecaux           #+#    #+#             */
/*   Updated: 2015/10/14 10:39:24 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*srctmp;
	char	*dsttmp;

	i = 0;
	srctmp = (char*)src;
	dsttmp = (char*)dst;
	while (i < n)
	{
		dsttmp[i] = srctmp[i];
		i++;
	}
	return (dst);
}

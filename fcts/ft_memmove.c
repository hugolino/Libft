/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/14 11:28:09 by hdecaux           #+#    #+#             */
/*   Updated: 2015/10/14 11:51:15 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dsttmp;
	char	*srctmp;
	char	*intmp;
	void	*in;

	i = 0;
	dsttmp = (char*)dst;
	srctmp = (char*)src;
	in = (void*)malloc(sizeof(ft_strlen(srctmp) + 1));
	intmp = in;
	while (i < len)
	{
		intmp[i] = srctmp[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		dsttmp[i] = intmp[i];
		i++;
	}
	return (dst);
}

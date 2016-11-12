/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_inv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 18:20:45 by hdecaux           #+#    #+#             */
/*   Updated: 2016/11/12 18:25:58 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy_inv(void *dst, const void *src, size_t n)
{
	char	*srctmp;
	char	*dsttmp;

	if (n == 0 || dst == src)
		return (dst);
	srctmp = (char *)src;
	dsttmp = (char *)dst;
	while (n--)
		dsttmp[n] = srctmp[n];
	return (dst);
}

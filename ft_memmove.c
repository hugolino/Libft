/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/14 11:28:09 by hdecaux           #+#    #+#             */
/*   Updated: 2016/11/12 18:29:48 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst > src)
		return (ft_memcpy_inv(dst, src, len));
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	return (dst);
}

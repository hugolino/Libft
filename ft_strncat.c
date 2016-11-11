/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/09 12:49:18 by hdecaux           #+#    #+#             */
/*   Updated: 2016/11/11 16:19:08 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t a;
	size_t b;

	a = 0;
	b = 0;
	while (dst[a] != '\0')
		a++;
	while (b != n && src[b])
	{
		dst[a] = src[b];
		a++;
		b++;
	}
	dst[a] = '\0';
	return (dst);
}

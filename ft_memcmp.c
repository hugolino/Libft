/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/14 13:04:57 by hdecaux           #+#    #+#             */
/*   Updated: 2015/10/14 13:26:27 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int						ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char *tmp1;
	const unsigned char *tmp2;

	i = 0;
	tmp1 = (const unsigned char*)s1;
	tmp2 = (const unsigned char*)s2;
	while (i < n)
	{
		if (tmp1[i] == tmp2[i])
			i++;
		else if (tmp1[i] != tmp2[i])
			return (tmp1[i] - tmp2[i]);
	}
	return (0);
}

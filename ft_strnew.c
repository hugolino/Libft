/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/14 13:49:10 by hdecaux           #+#    #+#             */
/*   Updated: 2016/11/11 12:14:36 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*mem;
	size_t	i;

	i = 0;
	mem = (char*)malloc(size + 1);
	if (mem == NULL)
		return (NULL);
	while (mem[i])
	{
		mem[i] = '\0';
		i++;
	}
	mem[i] = '\0';
	return (mem);
}

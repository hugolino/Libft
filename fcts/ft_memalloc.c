/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/14 13:33:32 by hdecaux           #+#    #+#             */
/*   Updated: 2015/10/14 13:46:59 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void	*mem;
	size_t	i;
	char	*memtmp;

	i = 0;
	mem = (void*)malloc(size);
	memtmp = mem;
	if (mem == NULL)
		return (NULL);
	while (i < size)
	{
		memtmp[i] = 0;
		i++;
	}
	return (mem);
}

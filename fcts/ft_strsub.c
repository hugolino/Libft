/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/16 13:27:05 by hdecaux           #+#    #+#             */
/*   Updated: 2015/11/26 14:21:43 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*t;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	t = (char*)malloc(len + 1);
	if (len < start || t == NULL)
		return (NULL);
	while (s[i] && len != 0)
	{
		if (i != start)
			i++;
		if (i == start)
		{
			while (i < (len + start))
			{
				t[j] = (char)s[i];
				i++;
				j++;
			}
		}
	}
	t[j] = '\0';
	return ((char*)t);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/16 13:27:05 by hdecaux           #+#    #+#             */
/*   Updated: 2016/11/11 15:06:53 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*t;
	size_t	i;

	if (s != NULL)
	{
		i = 0;
		t = (char*)malloc(len + 1);
		if (t == NULL)
			return (NULL);
		while (i < len)
		{
			t[i] = s[start];
			i++;
			start++;
		}
		t[i] = '\0';
		return (t);
	}
	return (NULL);
}

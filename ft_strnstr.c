/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 10:36:45 by hdecaux           #+#    #+#             */
/*   Updated: 2016/11/14 10:53:59 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s2);
	if (s2[i] == 0)
		return ((char*)s1);
	if (n < len)
		return (NULL);
	while (s1[i] && i <= (n - len))
	{
		if (ft_strncmp(&s1[i], s2, len) == 0)
			return ((char*)&s1[i]);
		else
			i++;
	}
	return (NULL);
}

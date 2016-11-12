/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 08:26:11 by hdecaux           #+#    #+#             */
/*   Updated: 2015/10/26 10:15:37 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	if (s2[i] == 0)
		return ((char*)s1);
	while (s1[i])
	{
		if (ft_strncmp(&s1[i], s2, ft_strlen(s2)) == 0)
			return ((char*)&s1[i]);
		else
			i++;
	}
	return (NULL);
}

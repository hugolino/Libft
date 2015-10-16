/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/16 11:18:38 by hdecaux           #+#    #+#             */
/*   Updated: 2015/10/16 13:05:39 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strtrim(const char *s)
{
	size_t	i;
	size_t	len;
	size_t	j;
	char	*str;

	i = 0;
	len = ft_strlen(s);
	j = len;
	while (s[i] && (s[i] == '\n' || s[i] == '\t' || s[i] == ' '))
	{
		i++;
	}
	while (j > 0 && (s[j] == '\0' || s[j] == '\n' || s[j] == '\t' ||
	s[j] == ' '))
	{
		j--;
	}
	if (len < j - i)
		return ("");
	len = j - i;
	str = ft_strsub(s, i, len + 1);
	return (str);
}

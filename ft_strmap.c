/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/16 13:43:31 by hdecaux           #+#    #+#             */
/*   Updated: 2016/11/11 14:54:02 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*str;

	if (s != NULL && f != NULL)
	{
		i = 0;
		str = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (str == NULL)
			return (NULL);
		while (s[i])
		{
			str[i] = (*f)((char)s[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}

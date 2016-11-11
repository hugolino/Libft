/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/16 11:18:38 by hdecaux           #+#    #+#             */
/*   Updated: 2016/11/11 16:10:32 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(const char *s)
{
	int		i;
	int		k;
	int		j;
	char	*str;

	if (s == NULL)
		return (NULL);
	i = 0;
	k = -1;
	j = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * j + 1);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, j + 1);
	while (s[i] != '\0' && (s[i] == '\n' || s[i] == '\t' || s[i] == ' '))
		i++;
	while (s[j] == '\0' || s[j] == '\n' || s[j] == '\t' || s[j] == ' ')
		j--;
	while (i <= j)
	{
		str[++k] = s[i];
		i++;
	}
	str[++k] = '\0';
	return (str);
}

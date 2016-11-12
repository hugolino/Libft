/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 11:27:26 by hdecaux           #+#    #+#             */
/*   Updated: 2016/11/12 17:24:42 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_tabcpy(char *tab, char const *s, size_t i, char c)
{
	int			k;

	k = 0;
	while (s[i] && s[i] != c)
	{
		tab[k] = s[i];
		i++;
		k++;
	}
	tab[k] = '\0';
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t		i;
	size_t		j;
	char		**tab;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	if ((tab = (char**)malloc(sizeof(char*) * (ft_lines(s, c) + 1))) == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else if (s[i] && s[i] != c)
		{
			if ((tab[j] = (char*)malloc(sizeof(char) * (ft_c(s, c, i) + 1))) \
				== NULL)
				return (NULL);
			i = ft_tabcpy(tab[j], s, i, c);
			j++;
		}
	}
	tab[j] = NULL;
	return (tab);
}

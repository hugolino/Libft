/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 11:27:26 by hdecaux           #+#    #+#             */
/*   Updated: 2015/11/26 13:14:03 by hdecaux          ###   ########.fr       */
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

	i = 0;
	j = 0;
	tab = (char**)malloc(sizeof(char*) * (ft_count_lines(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
			while (s[i] && s[i] == c)
				i++;
		if (s[i] && s[i] != c)
		{
			tab[j] = (char*)malloc(sizeof(char) * (ft_count_char(s, c, i) + 1));
			i = ft_tabcpy(tab[j], s, i, c);
			j++;
		}
	}
	tab[j] = NULL;
	return (tab);
}

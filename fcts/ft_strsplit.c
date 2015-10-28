/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 11:27:26 by hdecaux           #+#    #+#             */
/*   Updated: 2015/10/28 15:40:14 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_count_lines(char const *str, char c)
{
	size_t		b;
	size_t		m;

	b = 0;
	m = 1;
	while (str[b])
	{
		if (str[b] != c)
			b++;
		if (str[b] == c && str[b + 1] != c)
		{
			b++;
			m++;
		}
		else if (str[b] == c && str[b + 1] == c)
			b++;
	}
	return (m);
}

size_t			ft_count_char(char const *str, char c, int a)
{
	size_t		w;

	w = 0;
	while (str[a])
	{
		if (str[a] == c)
		{
			a++;
			break ;
		}
		else if (str[a] != c)
		{
			w++;
			a++;
		}
	}
	return (w);
}

int				ft_tabcpy(char *tab, char const *s, size_t i, char c)
{
	int k;

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

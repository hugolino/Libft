/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/09 12:53:25 by hdecaux           #+#    #+#             */
/*   Updated: 2015/10/09 12:54:03 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *str, int c)
{
	size_t a;

	a = ft_strlen(str);
	while (a != 0 && str[a] != (char)c)
		a--;
	if (str[a] == (char)c)
		return ((char*)&str[a]);
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/30 12:09:43 by hdecaux           #+#    #+#             */
/*   Updated: 2015/10/30 12:10:34 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (ft_isupper((int)str[i]) == 1)
		{
			str[i] = ft_tolower(str[i]);
			i++;
		}
		else
			i++;
	}
	return (str);
}

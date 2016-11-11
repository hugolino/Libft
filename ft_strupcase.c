/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/30 12:08:41 by hdecaux           #+#    #+#             */
/*   Updated: 2015/10/30 12:09:36 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (ft_islower((int)str[i]) == 1)
		{
			str[i] = ft_toupper(str[i]);
			i++;
		}
		else
			i++;
	}
	return (str);
}

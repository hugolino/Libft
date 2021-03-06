/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/12 12:55:10 by hdecaux           #+#    #+#             */
/*   Updated: 2016/11/10 12:49:06 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int a;

	a = 0;
	if (s != NULL)
	{
		while (s[a])
		{
			s[a] = '\0';
			a++;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:26:31 by hdecaux           #+#    #+#             */
/*   Updated: 2015/10/09 11:44:07 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isdigit(int a)
{
	if (a >= 48 && a <= 57)
		return (1);
	else
		return (0);
}

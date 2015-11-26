/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 08:42:05 by hdecaux           #+#    #+#             */
/*   Updated: 2015/11/26 13:13:18 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int		d;
	int		i;

	i = n;
	d = 0;
	while ((i / 10) != 0)
	{
		d++;
		i = i / 10;
	}
	return (d);
}

static char	*ft_cases(int n)
{
	char	*nb;

	if (n == 0)
	{
		nb = ft_strnew(1);
		nb[0] = 48;
	}
	if (n == -2147483648)
	{
		nb = ft_strnew(11);
		nb = "-2147483648";
	}
	return (nb);
}

char		*ft_itoa(int n)
{
	int		d;
	char	*nb;
	int		a;

	a = n;
	d = ft_count(n);
	if (n == 0 || n == -2147483648)
		return (ft_cases(n));
	if (n < 0)
	{
		nb = ft_strnew(d + 2);
		n = -n;
		d = d + 1;
	}
	if (n > 0)
		nb = ft_strnew(d);
	while (n != 0)
	{
		nb[d] = (n % 10) + 48;
		n = n / 10;
		d--;
	}
	if (a < 0)
		nb[0] = '-';
	return (nb);
}

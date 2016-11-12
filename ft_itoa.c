/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 13:36:47 by hdecaux           #+#    #+#             */
/*   Updated: 2016/11/11 16:53:11 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count(int n)
{
	int i;
	int count;

	i = n;
	count = 1;
	while (i / 10 != 0)
	{
		count++;
		i = i / 10;
	}
	if (n < 0)
		count = count + 1;
	return (count);
}

static char		*ft_cases(int n)
{
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n == 0)
		return (ft_strdup("0"));
	else
		return (NULL);
}

char			*ft_itoa(int n)
{
	char	*nb;
	int		count;

	count = ft_count(n);
	if (n == 0 || n == -2147483648)
		return (ft_cases(n));
	if ((nb = (char*)malloc(sizeof(char) * ft_count(n) + 1)) == NULL)
		return (NULL);
	nb[count] = '\0';
	count--;
	if (n < 0)
	{
		n = -n;
		nb[0] = '-';
	}
	while (n != 0)
	{
		nb[count] = (n % 10) + 48;
		n = n / 10;
		count--;
	}
	return (nb);
}

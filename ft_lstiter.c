/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 12:43:19 by hdecaux           #+#    #+#             */
/*   Updated: 2016/11/11 13:01:35 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstiter(t_list *lst, void (f)(t_list *elem))
{
	if (lst != NULL)
	{
		while (1)
		{
			(*f)(lst);
			if (lst->next != NULL)
				lst = lst->next;
			else
				break ;
		}
	}
}

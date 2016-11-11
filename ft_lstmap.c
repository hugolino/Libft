/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 13:02:11 by hdecaux           #+#    #+#             */
/*   Updated: 2015/10/29 15:12:39 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;
	t_list	*new;
	t_list	*tmp;

	new = NULL;
	while (lst)
	{
		tmp = f(lst);
		if (!new)
		{
			new = tmp;
			ret = new;
			new->next = NULL;
		}
		else
		{
			new->next = tmp;
			tmp->next = NULL;
			new = new->next;
		}
		lst = lst->next;
	}
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 12:31:42 by hdecaux           #+#    #+#             */
/*   Updated: 2015/10/29 12:41:41 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;
	t_list	*nextmp;

	list = *alst;
	while (list)
	{
		nextmp = list->next;
		del(list->content, list->content_size);
		free(list);
		list = nextmp;
	}
	*alst = NULL;
}

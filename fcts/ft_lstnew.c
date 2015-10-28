/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdecaux <hdecaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 16:23:47 by hdecaux           #+#    #+#             */
/*   Updated: 2015/10/28 16:51:30 by hdecaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (list == NULL)
		return NULL;
	if (content == 0)
	{
		list->content = NULL;
		list->content_size = 0;
	}
	else
	{
		list->content = (void*)content;
		list->content_size = content_size;
	}
	list->next = NULL;
	return (list);
}

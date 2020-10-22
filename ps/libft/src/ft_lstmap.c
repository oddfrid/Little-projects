/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blord<marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 10:41:36 by blord             #+#    #+#             */
/*   Updated: 2020/09/27 10:41:37 by blord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "ft_stdlib.h"

#include <stddef.h>

static void		del_content(void *content, size_t content_size)
{
	(void)content_size;
	ft_memdel(&content);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*node;
	t_list	*last;

	head = NULL;
	last = NULL;
	while (lst)
	{
		if (!(node = f(lst)) ||
			!(node = ft_lstnew(node->content, node->content_size)))
		{
			ft_lstdel(&head, &del_content);
			break ;
		}
		if (last)
			last->next = node;
		else
			head = node;
		last = node;
		lst = lst->next;
	}
	return (head);
}

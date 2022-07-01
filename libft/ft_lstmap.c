/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khle <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:02:50 by khle              #+#    #+#             */
/*   Updated: 2022/05/12 14:03:03 by khle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node0;
	t_list	*node1;
	t_list	*node2;

	if (!f || !del)
		return (NULL);
	node0 = ft_lstnew(f(lst->content));
	if (!node0)
		return (NULL);
	node1 = node0;
	while (lst->next)
	{
		lst = lst->next;
		node2 = ft_lstnew(f(lst->content));
		if (!node2)
			ft_lstclear(&node0, del);
		node1->next = node2;
		node1 = node2;
	}
	return (node0);
}

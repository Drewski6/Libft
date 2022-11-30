/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:03:16 by dpentlan          #+#    #+#             */
/*   Updated: 2022/11/28 12:03:17 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node_new;
	t_list	*first_new;

	first_new = 0;
	node_new = 0;
	while (lst)
	{
		node_new = ft_lstnew(f(lst->content));
		if (!node_new)
		{
			ft_lstclear(&first_new, del);
			return (0);
		}
		ft_lstadd_back(&first_new, node_new);
		lst = lst->next;
	}
	return (first_new);
}

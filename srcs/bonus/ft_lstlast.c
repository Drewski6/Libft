/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:15:14 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/18 20:51:19 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	***** ft_lstlast *****
 *
 *	DESCRIPTION:
 *		Returns the last node of the list.
 *	RETURN:
 *		Returns a pointer to t_list.
 */

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	current = lst;
	if (!current)
		return (0);
	while (current->next)
		current = current->next;
	return (current);
}

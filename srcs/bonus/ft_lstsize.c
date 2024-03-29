/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 22:44:55 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/18 20:53:46 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	***** ft_lstsize *****
 *
 *	DESCRIPTION:
 *		Counts the number of nodes in a list.
 *		Counts by moving to next node and count number of moves until lst->next
 *		equals NULL.
 *	RETURN:
 *		Returns number of nodes as an int.
 */

int	ft_lstsize(t_list *lst)
{
	int	size;

	if (!lst)
		return (0);
	size = 1;
	while (lst->next)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

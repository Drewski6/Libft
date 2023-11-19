/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_largest.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 22:39:50 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/19 22:57:46 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	***** ft_lst_largest *****
 *
 *	DESCRIPTION:
 *		Uses function s to find the length of each element in the list and 
 *		then returns the largest length found.
 *	RETURN:
 *		Returns the size of the longest element returned by s.
 */

size_t	ft_lst_largest(t_list **lst, size_t (*s)(void *))
{
	t_list	*current;	
	size_t	size;
	size_t	longest;

	size = 0;
	longest = 0;
	current = *lst;
	if (!current)
		return (0);
	while (current)
	{
		size = s(current->content);
		if (size > longest)
			longest = size;
		current = current->next;
	}
	return (longest);
}

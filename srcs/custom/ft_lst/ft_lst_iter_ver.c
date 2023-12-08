/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_iter_ver.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:12:03 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/20 18:15:09 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	***** name *****
 *
 *	DESCRIPTION:
 *		desc
 *	RETURN:
 *		ret
 */

int	ft_lst_iter_ver(t_list *lst, int (*f)(char *, int(*)(int)), int (*c)(int))
{
	t_list	*current;

	current = lst;
	if (!current)
		return (0);
	while (current)
	{
		if (!f(current->content, c))
			return (0);
		current = current->next;
	}
	return (1);
}

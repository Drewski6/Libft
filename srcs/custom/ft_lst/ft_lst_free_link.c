/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_free_link.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 21:26:28 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/19 21:30:12 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
 *	***** ft_lst_free_link *****
 *
 *	DESCRIPTION:
 *		Used as a del function in ft_lstclear or ft_lstdelone to free the content
 *		of the pointer called content.
 *	RETURN:
 *		Void function does not return a value.
 */

void	ft_lst_free_link(void *content)
{
	free(content);
	content = NULL;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_strlen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 23:11:45 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/19 23:17:50 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
 *	***** ft_lst_strlen *****
 *
 *	DESCRIPTION:
 *		desc
 *	RETURN:
 *		ret
 */

size_t	ft_lst_strlen(void *content)
{
	size_t	len;

	len = 0;
	while (content && ((char *)content)[len])
		len++;
	return (len);
}

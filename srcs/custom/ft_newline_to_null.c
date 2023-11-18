/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newline_to_null.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:47:11 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/18 21:42:08 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	***** ft_newline_to_null *****
 *
 *	DESCRIPTION:
 *		To be used with ft_striteri.
 *		Replaces any newline character at the end of a line with null.
 *	RETURN:
 *		Void function does not return a value.
 */

void	ft_newline_to_null(unsigned int i, char *ch_addr)
{
	(void) i;
	if (*ch_addr == '\n' && *(ch_addr + 1) == '\0')
		*ch_addr = 0;
	return ;
}

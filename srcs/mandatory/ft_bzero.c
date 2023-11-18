/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:56:13 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/18 23:41:08 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	***** ft_bzero *****
 *
 *	DESCRIPTION:
 *		Takes a pointer 'str', and a size_t 'len'.
 *		Sets 'len' number of memory addresses to 0 starting from address 'str'.
 *	RETURN:
 *		Void function does not return a value.
 */

void	ft_bzero(void *str, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*(char *)str = 0;
		str++;
		i++;
	}
}

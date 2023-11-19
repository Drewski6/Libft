/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:59:37 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/19 12:27:53 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
 *	***** ft_strlen *****
 *
 *	DESCRIPTION:
 *		Takes a character pointer.
 *	RETURN:
 *		Returns size_t number of 8 bit memory spaces between input pointer and
 *		the first null terminator.
 */

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:59:12 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/19 12:27:38 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
 *	***** ft_strlcpy *****
 *
 *	DESCRIPTION:
 *		Takes destination string 'dest', source string 'stc', and size_t 'size'.
 *		Copies maximum of 'size' bytes from 'src' to 'dest'.
 *	RETURN:
 *		Returns size_t number of bytes coppied.
 */

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0U;
	while (*src != '\0')
	{
		if (i + 1 < size)
		{
			*dest = *src;
			dest++;
		}
		src++;
		i++;
	}
	if (size != 0)
		*dest = '\0';
	return (i);
}

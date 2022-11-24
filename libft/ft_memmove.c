/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:58:05 by dpentlan          #+#    #+#             */
/*   Updated: 2022/11/11 12:58:20 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (src == 0 && dest == 0)
		return (0);
	if ((unsigned long int)dest - (unsigned long int)src >= len)
	{
		while (i < len)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i++;
		}
	}
	else
	{
		while (i < len)
		{
			*(char *)(dest + (len - 1 - i)) = *(char *)(src + (len - 1 - i));
			i++;
		}
	}
	return (dest);
}

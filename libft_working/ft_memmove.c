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
	unsigned int		i;

	i = 0;
	if ((unsigned long int)dest - (unsigned long)src >= len)
	{
		while (i < len)
		{
			*(unsigned char *)dest = *(unsigned char *)src;
			dest++;
			src++;
			i++;
		}
		return (dest);
	}
	else
	{
		while (len > 0)
		{
			*(unsigned char *)(dest + len) = *(unsigned char *)(src + len);
			len--;
		}
	}
	return (dest);
}

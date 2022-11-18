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
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	i = 0U;
	if ((unsigned long int)dest - (unsigned long int)src >= len)
	{
		while (i < len)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			printf("in first loop, i = %ld\n", i);
			i++;
		}
	}
	else
	{
		while (i < len)
		{
			*(char *)(dest + (len - i)) = *(char *)(src + (len - i));
			printf("in second loop, i = %ld\n", i);
			i++;
		}
	}
	return (dest);
}

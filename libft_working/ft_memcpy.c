/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:57:55 by dpentlan          #+#    #+#             */
/*   Updated: 2022/11/11 12:57:56 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, unsigned int len)
{
	unsigned int	i;

	i = 0;
	while (i < len)
	{
		*(char *)dest = *(char *)src;
		dest++;
		src++;
		i++;
	}
	return (dest);
}

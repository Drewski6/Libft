/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:58:30 by dpentlan          #+#    #+#             */
/*   Updated: 2022/11/14 11:58:33 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while (*((unsigned char*)s1 + i) == *((unsigned char*)s2 + i) && i < n)	
	{
		i++;	
	}
	return (*((unsigned char*)s1 + i) - *((unsigned char*)s2 + i));
}

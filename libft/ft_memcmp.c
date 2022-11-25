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

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (*((unsigned char *)s1 + i) == *((unsigned char *)s2 + i) && i < n - 1)
	{
		i++;
	}
	if (i == n)
		return (0);
	else
		return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
}

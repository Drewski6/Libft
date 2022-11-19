/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 20:06:00 by dpentlan          #+#    #+#             */
/*   Updated: 2022/11/19 20:06:02 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char **ft_split(char const *s, char c)
{
	size_t	s_len;
	size_t i;

	i = 0U;
	s_len = ft_strlen((char *)s);
	printf("strlen(s):%ld, c: %c\n", s_len, c);
	while (i < s_len)
	{
		if (s[i] == c)

	}
	return (0);
}

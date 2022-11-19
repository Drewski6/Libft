/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:20:47 by dpentlan          #+#    #+#             */
/*   Updated: 2022/11/17 17:21:34 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_in_charset(int c, char *set)
{
	while (*set)
	{
		if (*set == (unsigned char)c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*ptr;
	size_t	s1_len;

	i = 0;
	j = 0;
	s1_len = ft_strlen(s1);
	while (ft_in_charset(*((char *)s1 + i), (char *)set))
		i++;
	while (ft_in_charset(*((char *)s1 + (s1_len - 1 - j)), (char *)set))
		j++;
	ptr = ft_substr(s1, i, (s1_len - (i + j)));
	return (ptr);
}

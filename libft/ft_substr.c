/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:00:02 by dpentlan          #+#    #+#             */
/*   Updated: 2022/11/17 14:00:15 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	s_len;

	if (s == 0)
		return (0);
	if (start > ft_strlen(s))
		s_len = 0;
	else
		s_len = ft_strlen((char *)s + start);
	if (s_len < len)
	{
		ptr = (char *)ft_calloc((s_len + 1), sizeof(char));
		if (s_len > 0 && ptr)
			ft_strlcpy(ptr, (char *)s + start, s_len + 1);
	}
	else
	{
		ptr = (char *)ft_calloc((len + 1), sizeof(char));
		if (ptr)
			ft_strlcpy(ptr, (char *)s + start, len + 1);
	}
	return (ptr);
}

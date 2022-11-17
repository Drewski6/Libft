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

	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr)
		ft_bzero(ptr, (len + 1));
	if (ptr)
		ft_strlcpy(ptr, (char *)s + start, (len + 1));
	return (ptr);
}

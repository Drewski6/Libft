/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:22:54 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/18 23:34:10 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
 *	***** ft_strdup *****
 *
 *	DESCRIPTION:
 *		Takes a string 'src'.
 *	RETURN:
 *		Returns a newly allocated memory space which contains a duplicate of 
 *		memory space 'src'.
 *		Returns 0 if malloc fails.
 */

char	*ft_strdup(const char *src)
{
	char	*str_ret;
	size_t	src_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	str_ret = (char *)malloc(src_len * sizeof(char) + 1);
	if (!str_ret)
		return (0);
	while (src[i])
	{
		str_ret[i] = src[i];
		i++;
	}
	str_ret[i] = '\0';
	return (str_ret);
}

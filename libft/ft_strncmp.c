/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 10:13:09 by dpentlan          #+#    #+#             */
/*   Updated: 2022/11/13 10:13:35 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && i < n)
        i++;
    if (i == n)
        return (0);
    else
        return (s1[i] - s2[i]);
}

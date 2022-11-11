/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:59:12 by dpentlan          #+#    #+#             */
/*   Updated: 2022/11/11 12:59:13 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dest, char *src, size_t size)
{
    size_t  i;  

    i = 0u; 
    while (*src != '\0')
    {   
        if (i + 1 < size)
        {
            *dest = *src;
            dest++;
        }
        src++;
        i++;
    }   
    *dest = '\0';
    return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:58:53 by dpentlan          #+#    #+#             */
/*   Updated: 2022/11/11 12:59:00 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dest, char *src, size_t size)
{
    unsigned int    dest_len;
    unsigned int    src_len;
    unsigned int    i;  

    dest_len = 0U; 
    src_len = 0U; 
    i = 0U; 
    while (dest[dest_len] != '\0')
        dest_len++;
    while (src[src_len] != '\0')
        src_len++;
    if (size == 0)
        return (src_len);
    while (src[i] != '\0' && dest_len + i < size - 1)
    {   
        dest[dest_len + i] = src[i];
        i++;
    }   
    dest[dest_len + i] = '\0';
    if (dest_len > size)
        return (src_len + size);
    return (dest_len + src_len);
}

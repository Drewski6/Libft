/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:58:05 by dpentlan          #+#    #+#             */
/*   Updated: 2022/11/11 12:58:20 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
first cast pointer to uint
check that uint_dest - uint_src >= len
    makes sure that dest is at least "len" bytes away from src
    if so, do memcopy.
*/

#include "libft.h"


void*   ft_memmove(void* dest, const void* src, unsigned int len)
{
    unsigned long int destp = (long int) dest;
    unsigned long int srcp = (long int) src;
    unsigned int i;

    i = 0;
    if (destp - srcp >= len)    
    {
        while (i < len)
        {
            *(unsigned char*)dest = *(unsigned char*)src;
            dest++;
            src++;
            i++;
        }
        return (dest);
    }
    else
    {
        while (len > 0)
        {
            *(unsigned char*)(dest + len) = *(unsigned char*)(src + len);
            len--;
        }
    }
    return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:58:28 by dpentlan          #+#    #+#             */
/*   Updated: 2022/11/11 12:58:38 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
returns:
    void pointer to beginning of edited string.. Returns pointer the same as input.
parameters: 
    void* str : Any memory item to change
    int c     : value to replace mem location with. Can be int, but is placed like a char. Need to test ints greater than 127.
    size_t len: Number of bytes to replace in str with c.
*/

#include "libft.h"

void*   ft_memset(void* str, int c, unsigned int len)
{
    unsigned int i;

    i = 0;
    while (i < len)
    {
        *(char*)str = c;
        str++;
        i++;
    }
    return (str);
}

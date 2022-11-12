/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:57:41 by dpentlan          #+#    #+#             */
/*   Updated: 2022/11/11 12:57:45 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// >=32 <=126
int ft_isprint(char c)
{
    if (c >= 32 && c <= 126)
        return (1);
    else
        return (0);
}

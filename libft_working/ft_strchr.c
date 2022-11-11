/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:07:07 by dpentlan          #+#    #+#             */
/*   Updated: 2022/11/11 15:07:10 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*	ft_strchr(char* s, int c)
{
	int	i;

	i = 0;
	while(s[i] != 0)
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);		// returns null if no match found.
}

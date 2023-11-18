/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter_ver.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:51:32 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/18 18:09:33 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	NAME
 *		ft_striter_ver
 *	DESCRIPTION
 *		Iterates over a string and takes a function to use to verify some data.
 *		For example, pass ft_isdigit as the function and this function will
 *		verify that every character is a digit by returning 0 or 1.
 *	RETURN
 *		Bool function returns 1 for True and 0 for False.
 */

int	ft_striter_ver(char *str, int (*f)(int))
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (!f(str[i++]))
			return (0);
	}
	return (1);
}

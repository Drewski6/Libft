/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 13:11:16 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/18 23:34:44 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	***** ft_striteri *****
 *
 *	DESCRIPTION:
 *		Applies the function 'f' on each character of the string passed
 *		argument, passing its index as the first argument. Each character is
 *		passed by address to 'f' to be modified if necessary.
 *	RETURN:
 *		Void function does not return a value.
 */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		i;

	i = 0;
	if (s != 0 && f != 0)
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}

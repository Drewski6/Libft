/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isinset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:53:44 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/20 21:57:44 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

/*
 *	***** ft_isinset *****
 *
 *	DESCRIPTION:
 *		Checks a set and for a character.
 *	RETURN:
 *		Bool function returns 1 for True or 0 for False.
 */

int	ft_isinset(int c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == (char)c)
			return (1);
	}
	return (0);
}

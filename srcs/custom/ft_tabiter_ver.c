/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabiter_ver.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:44:04 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/18 21:40:22 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	***** ft_tabiter_ver *****
 *
 *	DESCRIPTION:
 *		Iterates over a table and uses function f to determine something about
 *			The contents of the table.
 *		For use with ft_striter_ver. 
 *		Like this you can use ft_isalpha and iterate over each string in a table
 *			to verify all the characters are alphabet characters.
 *	RETURN:
 *		Bool function returns 0 on success and 1 on error.
 */

int	ft_tabiter_ver(char **tab, int (*f)(char *, int(*)(int)), int (*c)(int))
{
	int	i;

	i = 0;
	if (!tab)
		return (0);
	while (tab[i])
	{
		if (!f(tab[i++], c))
			return (0);
	}
	return (1);
}

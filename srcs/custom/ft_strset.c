/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:39:31 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/20 20:11:02 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
 *	***** ft_strset *****
 *
 *	DESCRIPTION:
 *		Iterates over a string and verifies that each character in the string
 *		is included in the set.
 *		If a character is found that is not in the set, its address is returned.
 *	RETURN:
 *		Returns an address to the first charcter that is not in the set,
 *		or 0 if all characters are in the set.
 */

char	*ft_strset(char *str, char *set)
{
	int	i;
	int	j;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		j = 0;
		while (set[j])
		{
			if (str[i] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (NULL);
}

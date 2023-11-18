/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_table.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:49:36 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/18 19:12:52 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
 *	NAME
 *		ft_free_table
 *	DESCRIPTION
 *		Frees a table pointed to by char **table.
 *	RETURN
 *		Void function does not return a value.
 */

void	ft_free_table(char **table)
{
	int	i;

	i = 0;
	while (table[i])
	{
		free(table[i]);
		table[i] = NULL;
		i++;
	}
	free(table);
	table = NULL;
	return ;
}

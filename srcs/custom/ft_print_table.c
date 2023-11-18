/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_table.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:45:22 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/18 13:46:52 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
**	NAME
		ft_print_table
**	DESCRIPTION
		Prints the contents of a table by printing each address in a char **.
**	RETURN
		Void function does not return a value.
*/

void	ft_print_table(char **table)
{
	int	i;

	i = 0;
	if (!table)
	{
		ft_printf("(NULL)\n");
		return ;
	}
	if (table)
	{
		ft_printf("\n");
		while (table[i])
			ft_printf("%s\n", table[i++]);
	}
	return ;
}

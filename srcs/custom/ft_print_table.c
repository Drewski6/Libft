/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_table.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:45:22 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/18 21:32:08 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_tab_flag_0(char **table)
{
	int	i;

	i = 0;
	while (table[i])
		ft_printf("%s\n", table[i++]);
	return ;
}

static void	ft_print_tab_flag_1(char **table)
{
	int	i;

	i = 0;
	ft_printf("[\"%s\"", table[i++]);
	while (table[i])
		ft_printf(",\"%s\"", table[i++]);
	ft_printf("]\n");
	return ;
}

/*
 *	***** ft_print_table *****
 *
 *	DESCRIPTION:
 *		Prints the contents of a table by printing each address in a char **.
 *		A flag can be set to change how the table formatting is done.
 *	RETURN:
 *		Void function does not return a value.
 */

void	ft_print_table(char **table, int flag)
{
	if (!table)
	{
		ft_printf("(NULL)\n");
		return ;
	}
	if (flag == 0)
		ft_print_tab_flag_0(table);
	if (flag == 1)
		ft_print_tab_flag_1(table);
	return ;
}

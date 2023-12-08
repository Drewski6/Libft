/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_print_link_nl.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 21:40:05 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/19 21:53:17 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_printf.h"

/*
 *	***** ft_lst_print_link_nl *****
 *
 *	DESCRIPTION:
 *		Used with ft_lstiter and will print all the strings in content.
 *	RETURN:
 *		Void function does not return a value.
 */

void	ft_lst_print_link_nl(void *content)
{
	ft_printf("%s\n", (char *)content);
}

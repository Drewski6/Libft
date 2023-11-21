/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_to_bin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:20:37 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/21 18:13:28 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	***** ft_num_to_bin *****
 *
 *	DESCRIPTION:
 *		Takes a number as an unsigned int and a number of binary places to print
 *		and then prints the binary representation of the number to stdout.
 *	RETURN:
 *		Void function does not return a value.
 */

void	ft_num_to_bin(unsigned int num, int places)
{
	unsigned long long	c;
	int					i;
	int					size;

	if (!places)
		size = sizeof(int) * 8;
	else
		size = places;
	i = 0;
	c = (unsigned long long)num;
	while (i < size)
	{
		if (c & ft_power(2, (size - 2)))
			ft_putchar_fd('1', 1);
		else
			ft_putchar_fd('0', 1);
		c = c << 1;
		i++;
	}
	ft_putchar_fd('\n', 1);
}

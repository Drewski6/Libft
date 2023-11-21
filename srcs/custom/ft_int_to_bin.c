/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_to_bin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:20:37 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/21 18:02:34 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

unsigned long long	ft_power(unsigned long long num, unsigned long long exp)
{
	unsigned long long	i;
	unsigned long long	num_2;

	i = 0;
	num_2 = num;
	while (i < exp)
	{
		num = num * num_2;
		i++;
	}
	return (num);
}

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
}

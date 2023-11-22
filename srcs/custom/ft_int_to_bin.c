/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_to_bin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:20:37 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/22 09:05:35 by dpentlan         ###   ########.fr       */
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
 *		Returns a pointer to a newly malloced string containing the binary
 *		representation of num.
 */

char	*ft_num_to_bin(unsigned int num, int places)
{
	unsigned long long	c;
	int					i;
	int					size;
	char				*buf;

	if (!places)
		size = sizeof(int) * 8;
	else
		size = places;
	i = 0;
	buf = (char *)ft_calloc(size + 1, sizeof(char));
	if (!buf)
		return (NULL);
	c = (unsigned long long)num;
	while (i < size)
	{
		if (c & ft_power(2, (size - 2)))
			buf[i] = '1';
		else
			buf[i] = '0';
		c = c << 1;
		i++;
	}
	return (buf);
}

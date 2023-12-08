/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:12:32 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/21 18:19:12 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>

/*
 *	***** ft_power *****
 *
 *	DESCRIPTION:
 *		Takes a number and an exponent and returns the number raised to that
 *		exponent.
 *	RETURN:
 *		Returns the result of the exponent as an unsigned long long.
 */

uint64_t	ft_power(unsigned long long num, unsigned long long exp)
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

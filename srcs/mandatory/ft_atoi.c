/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:15:41 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/19 12:24:17 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	***** int_build *****
 *
 *	DESCRIPTION:
 *		Takes a string of ascii numerical characters and builds an integer
 *		of the same value.
 *	RETURN:
 *		Returns integer representation of input string.
 */

static int	int_build(char *str)
{
	int	ret_int;

	ret_int = 0;
	while (*str >= '0' && *str <= '9')
	{
		ret_int += *str - '0';
		if (str[1] >= '0' && str[1] <= '9')
			ret_int *= 10;
		str++;
	}
	return (ret_int);
}

/*
 *	***** ft_atoi *****
 *
 *	DESCRIPTION:
 *		Takes a string with ascii numbers, spaces or a single '+' or '-' sign.
 *	RETURN:
 *		Returns a signed integer representation of of the string entered.
 */

int	ft_atoi(const char *nptr)
{
	int	mult;

	mult = 1;
	while (*nptr == 32 || *nptr == '\f' || *nptr == '\n'
		|| *nptr == '\r' || *nptr == '\t' || *nptr == '\v')
		nptr++;
	if (*nptr == '-' || *nptr == 43)
	{
		if (*nptr == '-')
			mult *= -1;
		nptr++;
	}
	while (*nptr)
	{
		if (*nptr >= '0' && *nptr <= '9')
			return (int_build((char *)nptr) * mult);
		else
			return (0);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:10:36 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/18 23:17:59 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	***** ft_isalnum *****
 *
 *	DESCRIPTION:
 *		Takes an integer value for ascii character.
 *		Inclusive OR of result of ft_isalpha and ft_isdigit functions.
 *	RETURN:
 *		Returns 1 if the character is an alpha-numeric character.
 *		Returns 0 if the character is not an alpha-numeric character.
 */

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:53:10 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/18 23:20:02 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	***** ft_isdigit *****
 *
 *	DESCRIPTION:
 *		Takes an integer value for ascii character.
 *	RETURN:
 *		Returns 1 if the character is a digit character.
 *		Returns 0 if the character is not a digit character.
 */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

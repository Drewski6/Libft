/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:11:16 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/18 23:18:53 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	***** ft_isalpha *****
 *
 *	DESCRIPTION:
 *		Takes an integer value for ascii character.
 *	RETURN:
 *		Returns 1 if the character is an alphabet character.
 *		Returns 0 if the character is not an alphabet character.
 */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

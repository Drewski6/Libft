/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:56:54 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/19 12:25:04 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	***** ft_ascii *****
 *
 *	DESCRIPTION:
 *		Takes an integer value for ascii character.
 *	RETURN:
 *		Returns 1 if the character is an ascii character.
 *		Returns 0 if the character is not an ascii character.
 */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

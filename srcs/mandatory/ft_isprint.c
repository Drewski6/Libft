/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:57:41 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/19 12:25:15 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	***** ft_isprint *****
 *
 *	DESCRIPTION:
 *		Takes an integer value for ascii character.
 *	RETURN:
 *		Returns 1 if the character is a printable character.
 *		Returns 0 if the character is not a printable character.
 */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

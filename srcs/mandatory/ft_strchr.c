/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:07:07 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/19 12:26:42 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	***** ft_strchr *****
 *
 *	DESCRIPTION:
 *		Takes a string pointer 's' and a character 'c'.
 *	RETURN:
 *		Returns the address of the first instance of character 'c'.
 */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (s == 0)
		return (0);
	while (s[i] != 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (unsigned char)c)
		return ((char *)&s[i]);
	return (0);
}

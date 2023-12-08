/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:45:22 by dpentlan          #+#    #+#             */
/*   Updated: 2023/12/07 16:22:48 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	NAME
 *		ft_strchr_count.c
 *	DESCRIPTION
 *		Takes a string and returns how many times a given character is present
 *		in the string.
 *	RETURN
 *		Returns the integer count of the number of times the given character 
 *		appears in the string.
 */

int	ft_strchr_count(const char *s, const int c)
{
	int	ret;
	int	i;

	ret = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			ret++;
		i++;
	}
	return (ret);
}

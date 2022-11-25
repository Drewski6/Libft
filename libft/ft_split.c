/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 20:06:00 by dpentlan          #+#    #+#             */
/*   Updated: 2022/11/19 20:06:02 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_word_count(char *s, char c)
{
	int word_count;
	int i;

	i = 0;
	word_count = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			word_count++;
		if (s[i] == c && s[i + 1] != c && s[i + 1] != 0)
			word_count++;
		i++;
	}
	return (word_count);
}

int	free_all(char **array, int fail_index)
{
	while (fail_index > 0)
	{
		fail_index--;
		free(array[fail_index]);
		array[fail_index] = 0;
	}
	free(array);
	return (0);
}

char **ft_split(char const *s, char c)
{
	int		word_count;
	char 	**array;
	int		i;
	int		word_len;
	int		array_index;
	int 	start;

	array = 0;
	word_count = 0;
	if (s == 0 || c == 0)
		return (0);
	word_count = get_word_count((char *)s, c);
	array = (char **)malloc((word_count + 1) * sizeof(char *));
	if (array == 0)
		return (0);
	ft_bzero(array, (size_t)(word_count + 1));
	i = 0;
	array_index = 0;
	while (s[i])
	{
		word_len = 0;
		start = 0;
		if (s[i] != c) 
			start = i;
		while (s[i] != c && s[i] != 0)
		{
			word_len++;	
			i++;
		}
		if (word_len)
		{
			array[array_index] = ft_substr(s, start, word_len);
			if (array[array_index] == 0)
			{
				free_all(array, array_index);
				array = 0;
				return (0);
			}
			array_index++;
		}
		i++;
	}
	return (array);
}

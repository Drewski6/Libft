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

static int	get_word_count(char *s, char c)
{
	int	word_count;
	int	i;

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

static int	free_all(char **array, int fail_index)
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

static int	add_word(char **array, int word_len, int start, char *s)
{
	int	i;

	i = 0;
	while (array[i])
		i++;
	array[i] = ft_substr(s, start, word_len);
	if (array[i] == 0)
	{
		free_all(array, i);
		array = 0;
		return (0);
	}
	return (word_len);
}

static int	fill_array(char **array, char *s, char c)
{
	int		i;
	int		word_len;
	int		start;

	i = 0;
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
			if (!add_word(array, word_len, start, s))
				return (0);
		}
		i++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**array;

	array = 0;
	word_count = 0;
	if (s == 0)
		return (0);
	word_count = get_word_count((char *)s, c);
	if (!word_count)
		return (0);
	array = (char **)ft_calloc((word_count + 1), sizeof(char *));
	if (!array)
		return (0);
	if (!fill_array(array, (char *)s, c))
		return (0);
	return (array);
}

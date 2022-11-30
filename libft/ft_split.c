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

static int	count_words(char *s, char c)
{
	int	i;
	int	word_count;

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

void	empty_table(char ***split_table)
{
	int	i;

	i = 0;
	while ((*split_table)[i])
	{
		free((*split_table)[i]);
		i++;
	}
	ft_bzero(*split_table, i);
	free(*split_table);
	*split_table = 0;
}

char	**fill_table(char **split_table, char *s, char c)
{
	size_t	start;
	int		j;
	int		i;

	start = 0;
	j = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])	
			start = i;	
		while (s[i] && s[i] != c)
			i++;
		if (s[i])
		{
			split_table[j] = ft_substr(s, start, (i - start));
			if (!split_table[j])
			{
				empty_table(&split_table);
				return (0);
			}
			j++;
		}
	}
	return (split_table);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;	
	char	**split_table;

	split_table = 0;
	word_count = 0;
	word_count = count_words((char *)s, c);
	if (!word_count)
		return (0);
	split_table = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!split_table)
		return (0);
	ft_bzero(split_table, word_count + 1);
	if (!fill_table(split_table, (char *)s, c))
	{
		empty_table(&split_table);
		return (0);
	}
	return (split_table);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 23:53:40 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/18 22:33:58 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static size_t	ft_strlen_gnl(const char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

static size_t	ft_strlcpy_zero_gnl(char *dest, char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while ((i < size - 1) && src[i])
		{
			dest[i] = src[i];
			src[i] = 0;
			i++;
		}
		dest[i] = 0;
	}
	return (ft_strlen_gnl(src));
}

static void	*ft_memchrnul_gnl(const void *s, unsigned char c, size_t n)
{
	unsigned char	*addr;

	addr = (unsigned char *)s;
	while (n--)
	{
		if (*addr == c)
			return (addr);
		addr++;
	}
	return (addr);
}

static int	ft_strjoin_overflow(char **previous, char *buffer)
{
	char	*str;
	char	*next;
	size_t	lprev;
	size_t	lbuff;
	int		next_is_newline;

	next = ft_memchrnul_gnl(buffer, '\n', ft_strlen_gnl(buffer));
	next_is_newline = (*next == '\n');
	lbuff = next - buffer + next_is_newline;
	lprev = 0;
	if (*previous)
		lprev = ft_strlen_gnl(*previous);
	str = malloc(lprev + lbuff + 1);
	if (!str)
		return (0);
	if (*previous)
		ft_strlcpy_zero_gnl(str, *previous, lprev + 1);
	ft_strlcpy_zero_gnl(str + lprev, buffer, lbuff + 1);
	ft_strlcpy_zero_gnl(buffer, next + next_is_newline, BUFFER_SIZE + 1);
	free(*previous);
	*previous = str;
	return (next_is_newline);
}

/*
 *	***** get_next_line *****
 *
 *	DESCRIPTION:
 *		Takes an open file descrptor fd and returns the next line from it.
 *		Next line is from the bigging of a line until the next newline character.
 *	RETURN:
 *		Returns a pointer to a newly malloced string.
 *		Returns NULL is EOF is reached.
 *		Returns NULL on malloc error (check errno).
 */

char	*get_next_line(int fd)
{
	static char	buffer[FOPEN_MAX][BUFFER_SIZE + 1];
	char		*str;
	ssize_t		bytes_read;

	if (fd < 0 || fd >= FOPEN_MAX)
		return (0);
	str = 0;
	if (buffer[fd][0])
		if (ft_strjoin_overflow(&str, buffer[fd]))
			return (str);
	bytes_read = read(fd, buffer[fd], BUFFER_SIZE);
	while (bytes_read > 0)
	{
		if (ft_strjoin_overflow(&str, buffer[fd]))
			return (str);
		bytes_read = read(fd, buffer[fd], BUFFER_SIZE);
	}
	if (bytes_read < 0)
	{
		free(str);
		return (0);
	}
	return (str);
}

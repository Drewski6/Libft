/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 23:53:40 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/18 00:02:19 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

size_t	ft_strlen(const char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

size_t	ft_strlcpy_zero(char *dest, char *src, size_t size)
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
	return (ft_strlen(src));
}

void	*ft_memchrnul(const void *s, unsigned char c, size_t n)
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

int	ft_strjoin_overflow(char **previous, char *buffer)
{
	char	*str;
	char	*next;
	size_t	lprev;
	size_t	lbuff;
	int		next_is_newline;

	next = ft_memchrnul(buffer, '\n', ft_strlen(buffer));
	next_is_newline = (*next == '\n');
	lbuff = next - buffer + next_is_newline;
	lprev = 0;
	if (*previous)
		lprev = ft_strlen(*previous);
	str = malloc(lprev + lbuff + 1);
	if (!str)
		return (0);
	if (*previous)
		ft_strlcpy_zero(str, *previous, lprev + 1);
	ft_strlcpy_zero(str + lprev, buffer, lbuff + 1);
	ft_strlcpy_zero(buffer, next + next_is_newline, BUFFER_SIZE + 1);
	free(*previous);
	*previous = str;
	return (next_is_newline);
}

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
	printf("buffer is %s\n", buffer[fd]);
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

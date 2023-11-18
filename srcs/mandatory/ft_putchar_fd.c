/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 13:33:09 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/18 23:25:42 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 *	***** ft_putchar_fd *****
 *
 *	DESCRIPTION:
 *		Outputs the character 'c' to the given file descriptor.
 *	RETURN:
 *		Returns nothing.
 */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

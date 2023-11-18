/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 13:53:40 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/18 23:28:14 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/*
 *	***** ft_putendl_fd *****
 *
 *	DESCRIPTION:
 *		Outputs the string 's' to the given file descriptor followed by a newline.
 *	RETURN:
 *		Void function does not return a value.
 */

void	ft_putendl_fd(char *s, int fd)
{
	if (s == 0)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

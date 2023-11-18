/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 13:53:30 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/18 23:41:39 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*
 *	***** ft_putstr_fd *****
 *
 *	DESCRIPTION:
 *		Outputs the string 's' to the given file descriptor.
 *	RETURN:
 *		Void function does not return a value.
 */

void	ft_putstr_fd(char *s, int fd)
{
	if (s == 0)
		return ;
	write(fd, s, ft_strlen(s));
}

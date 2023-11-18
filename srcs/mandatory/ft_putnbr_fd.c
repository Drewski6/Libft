/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 13:53:54 by dpentlan          #+#    #+#             */
/*   Updated: 2023/11/18 23:41:31 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 *	***** ft_putnbr_fd *****
 *
 *	DESCRIPTION:
 *		Outputs the integer 'n' to the given file descriptor.
 *	RETURN:
 *		Void function does not return a value.
 */

void	ft_putnbr_fd(int n, int fd)
{
	long	nbl;
	char	c;

	nbl = (long)n;
	if (nbl < 0)
		write(fd, "-", 1);
	if (nbl / 10 != 0)
	{
		if (nbl < 0)
			ft_putnbr_fd((nbl / 10) * -1, fd);
		else
			ft_putnbr_fd(nbl / 10, fd);
	}
	if (nbl < 0)
		c = (((nbl % 10) * -1) + '0');
	else
		c = (nbl % 10 + '0');
	write(fd, &c, 1);
	return ;
}

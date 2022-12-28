/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:57:36 by dpentlan          #+#    #+#             */
/*   Updated: 2022/11/17 10:57:39 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*  *** ft_calloc (42 contiguous allocation) ***
 *
 *  Takes a size_t 'num_elem' (number of elements) and
 *  a size_t 'elem_size' (element size).
 *  Allocates memory for the product of 'num_elem' and 'elem_size'
 *  and initializes all memory to 0.
 *  Returns address to allocated memory space.
 */

void	*ft_calloc(size_t num_elem, size_t elem_size)
{
	void	*ptr;

	if (num_elem == 0 || elem_size == 0)
	{
		num_elem = 1;
		elem_size = 1;
	}
	if (num_elem >= SIZE_MAX || elem_size >= SIZE_MAX)
		return (0);
	ptr = malloc(num_elem * elem_size);
	if (ptr)
		ft_bzero (ptr, num_elem * elem_size);
	return (ptr);
}

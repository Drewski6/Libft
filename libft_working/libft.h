/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:31:39 by dpentlan          #+#    #+#             */
/*   Updated: 2022/11/07 14:31:56 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  header for my libft files.

#ifndef LIBFT_H
#define LIBFT_H
# include <stddef.h>

int ft_isalpha(char c);
int ft_isdigit(char c);
int ft_isalnum(char c);
int ft_isascii(int c);
int ft_isprint(char c);
long    ft_strlen(const char* str);
void*   ft_memset(void* str, int c, unsigned int len);      // change to size_t
void    ft_bzero(void* str, unsigned int len);
void*   ft_memcpy(void* dest, const void* src, unsigned int len);       // change to size_t
void*   ft_memmove(void* dest, const void* src, unsigned int len);      // change to size_t
size_t  ft_strlcpy(char *dest, char *src, size_t size);
size_t  ft_strlcat(char *dest, char *src, size_t size);
int	ft_toupper(int c);
int	ft_tolower(int c);
char*	ft_strchr(const char* s, int c);


#endif

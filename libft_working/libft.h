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
long    ft_strlen(const char *str);
void*   ft_memset(void *str, int c, size_t len);
void    ft_bzero(void *str, size_t len);
void*   ft_memcpy(void *dest, const void *src, size_t len);
void*   ft_memmove(void *dest, const void *src, size_t len);
size_t  ft_strlcpy(char *dest, char *src, size_t size);
size_t  ft_strlcat(char *dest, char *src, size_t size);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpentlan <dpentlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:31:39 by dpentlan          #+#    #+#             */
/*   Updated: 2023/12/08 14:18:45 by dpentlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  header for my libft files.

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdint.h>

//***** typedefs/structs *****//

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

//***** function prototypes *****//

//***** libft mandatory *****//

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
size_t		ft_strlen(const char *str);
void		*ft_memset(void *str, int c, size_t len);
void		ft_bzero(void *str, size_t len);
void		*ft_memcpy(void *dest, const void *src, size_t len);
void		*ft_memmove(void *dest, const void *src, size_t len);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
size_t		ft_strlcat(char *dest, const char *src, size_t size);
int			ft_toupper(int c);
int			ft_tolower(int c);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
char		*ft_strnstr(const char *big, const char *little, size_t len);
int			ft_atoi(const char *nptr);
void		*ft_calloc(size_t num_elem, size_t elem_size);
char		*ft_strdup(const char *src);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);

//***** libft bonus *****//

t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *newl);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *newl);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

//***** libft custom *****//

void		ft_lst_free_link(void *content);
void		ft_lst_print_link(void *content);
void		ft_lst_print_link_nl(void *content);
size_t		ft_lst_largest(t_list **lst, size_t (*s)());
size_t		ft_lst_strlen(void *content);
int			ft_lst_iter_ver(t_list *lst, int (*f)(char *, int(*)(int)),
				int (*c)(int));
void		ft_free_table(char **table);
void		ft_newline_to_null(unsigned int i, char *ch_addr);
void		ft_print_table(char **table, int flag);
int			ft_striter_ver(char *str, int (*f)(int));
char		*ft_strset(char *str, char *set);
size_t		ft_tablen(char **tab);
int			ft_tabiter_ver(char **tab,
				int (*f)(char *, int(*)(int)), int (*c)(int));
int			ft_isinset(int c, char *set);
char		*ft_num_to_bin(unsigned int num, int places);
uint64_t	ft_power(unsigned long long num, unsigned long long exp);
void		ft_print_table(char **table, int flag);
void		ft_free_table(char **table);
void		ft_newline_to_null(unsigned int i, char *ch_addr);
size_t		ft_tablen(char **tab);
int			ft_tabiter_ver(char **tab,
				int (*f)(char *, int(*)(int)), int (*c)(int));
int			ft_striter_ver(char *str, int (*f)(int));
char		*ft_strset(char *str, char *set);
int			ft_strchr_count(const char *s, const int c);

#endif

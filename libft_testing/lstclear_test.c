#include "../libft/libft.h"
#include <stdio.h>

int	print_list(t_list *lst)
{
	int i;

	i = 0;
	printf("\n");
	while (lst->next)
	{
		printf("Content: %s\n", (char *)lst->content);
		lst = lst->next;
		i++;
	}
	printf("\n");
	return (0);
}

void	delete_content(void *content)
{
	free(content);
}

int main (void)
{
	char 	string[] = "This is a string ";
	char 	**string_t;
	char	*string_buff;
	int		i;

	printf("%ld\n", ft_strlen(string));
	string_t = (char **)malloc(11 * sizeof(char *));
	ft_bzero(string_t, 11);
	string_buff = (char *)malloc(sizeof(char) * (ft_strlen(string) + 3));

	t_list *first;
	t_list *current;

	while (i < 10)
	{
		ft_strlcpy(string_buff, string, ft_strlen(string) + 3);
		ft_strlcat(string_buff, ft_itoa(i), ft_strlen(string) + 3);
		string_t[i] = ft_strdup(string_buff);
		i++;
	}
	i = 0;
	first = ft_lstnew(string_t[0]);
	first->next = ft_lstnew(string_t[1]);
	current = first->next;
	i = 0;
	while (i < 9)
	{
		current->next = ft_lstnew(string_t[i + 2]);
		current = current->next;
		i++;
	}
	current = current->next;

	print_list(first);

	ft_lstclear(&(first->next->next->next), delete_content);
	
	print_list(first);

	//free(first);

	return (0);
}

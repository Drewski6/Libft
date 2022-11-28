#include "../libft/libft.h"
#include <stdio.h>

int	print_list(t_list *lst)
{
	int i;

	i = 0;
	while (lst->next)
	{
		printf("Content on node %d: %s\n", i, (char *)lst->content);
		lst = lst->next;
		i++;
	}
	return (0);
}

int delete_content(void *content)
{
	free(content);
	return (0);
}

int main (void)
{
	char 	string[] = "This is a string";
	char 	*string_1;
	int		i;


	printf("%ld\n", ft_strlen(string));
	string_1 = (char *)malloc((ft_strlen(string) + 1) * sizeof(char));
	ft_strlcpy(string_1, string, ft_strlen(string) + 1);

	t_list *first;
	t_list *current;

	first = ft_lstnew(string_1);
	first->next = ft_lstnew(string_1);
	current = first->next;
	i = 0;
	while (i < 10)
	{
		current->next = ft_lstnew(string_1);
		current = current->next;
		i++;
	}
	current = current->next;

	print_list(first);

	//ft_lstdelone(second, delete_one);
	
	free(first);

	return (0);
}

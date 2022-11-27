#include "../libft/libft.h"
#include <stdio.h>

int main (void)
{
	char string_1[] = "Here is a string.";
	char string_2[] = "Here is another string.";
	t_list *first;
	t_list *new;

	first = ft_lstnew(string_1);
	new = ft_lstnew(string_2);

	ft_lstadd_front(&first, new);

	printf("first content:%s\n", (char *)first->content);
	printf("first next:%p\n", first->next);
	printf("new content:%s\n", (char *)new->content);
	printf("new next:%p\n", new->next);
	printf("new->next->content%s\n", (char *)new->next->content);
	
	free(first);
	free(new);

	return (0);
}

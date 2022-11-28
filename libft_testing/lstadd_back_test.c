#include "../libft/libft.h"
#include <stdio.h>

int main (void)
{
	char string_1[] = "First node.";
	char string_2[] = "Second node.";
	char string_3[] = "Third node.";
	char string_n[] = "New node.";

	t_list *first;
	t_list *second;
	t_list *third;
	t_list *new;

	first = ft_lstnew(string_1);
	second = ft_lstnew(string_2);
	third = ft_lstnew(string_3);
	new = ft_lstnew(string_n);

	first->next = second;
	second->next = third;


	printf("BEFORE\n");
	printf("first address:%p\n", first);
	printf("first content:%s\n", (char *)first->content);
	printf("first next:%p\n", first->next);
	printf("second address:%p\n", second);
	printf("second content:%s\n", (char *)second->content);
	printf("second next:%p\n", second->next);
	printf("third address:%p\n", third);
	printf("third content:%s\n", (char *)third->content);
	printf("third next:%p\n", third->next);
	printf("new address:%p\n", new);
	printf("new content:%s\n", (char *)new->content);
	printf("new next:%p\n", new->next);

	ft_lstadd_back(&first, new);
	
	printf("AFTER\n");
	printf("first address:%p\n", first);
	printf("first content:%s\n", (char *)first->content);
	printf("first next:%p\n", first->next);
	printf("second address:%p\n", second);
	printf("second content:%s\n", (char *)second->content);
	printf("second next:%p\n", second->next);
	printf("third address:%p\n", third);
	printf("third content:%s\n", (char *)third->content);
	printf("third next:%p\n", third->next);
	printf("new address:%p\n", new);
	printf("new content:%s\n", (char *)new->content);
	printf("new next:%p\n", new->next);

	free(first);
	free(second);
	free(third);
	free(new);

	return (0);
}

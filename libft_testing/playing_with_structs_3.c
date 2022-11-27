#include "../libft/libft.h"
#include <stdio.h>

int main (void)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;

	char string_1[] = "This is a string";
	char string_2[] = "Second String";
	char string_3[] = "Third String";

	first = (t_list *)malloc(1 * sizeof(t_list));
	second = (t_list *)malloc(1 * sizeof(t_list));
	third = (t_list *)malloc(1 * sizeof(t_list));

	first->content = string_1;
	second->content = string_2;
	third->content = string_3;

	first->next = second;
	second->next = third;
	third->next = NULL;
	
	printf("Content in first->content:\t%s\n", (char *)first->content);
	printf("Content in second->content:\t%s\n", (char *)second->content);
	printf("Content in third->content:\t%s\n", (char *)third->content);

	printf("Content in first->content:\t\t%s\n", (char *)first->content);
	printf("Content in first->next->content:\t%s\n", (char *)first->next->content);
	printf("Content in first->next->next->content:\t%s\n", (char *)first->next->next->content);
	printf("Content in first->next->next->next:\t%s\n", (char *)first->next->next->next);

	free(first);
	free(second);
	free(third);

	ft_lstnew(string_1);

	return (0);
}

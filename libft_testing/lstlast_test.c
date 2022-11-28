#include "../libft/libft.h"
#include <stdio.h>

int main (void)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;
	t_list	*last;
	char string_1[] = "First node.";
	char string_2[] = "Second node.";
	char string_3[] = "Third node.";

	first = ft_lstnew(string_1);
	second = ft_lstnew(string_2);
	third = ft_lstnew(string_3);

	ft_lstadd_front(&third, second);
	ft_lstadd_front(&second, first);

	last = ft_lstlast(first);
	printf("content of last: %s\n", (char *)last->content);

	return (0);
}

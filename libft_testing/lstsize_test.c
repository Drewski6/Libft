#include "../libft/libft.h"
#include <stdio.h>

int main (void)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;
	char string[] = "Can I offer you a nail?";

	first = ft_lstnew(string);
	second = ft_lstnew(string);
	third = ft_lstnew(string);

	ft_lstadd_front(&third, second);
	ft_lstadd_front(&second, first);


	printf("return len: %d", ft_lstsize(first));

	return (0);
}

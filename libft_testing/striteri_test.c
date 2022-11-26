#include <stdio.h>
#include "../libft/libft.h"

void do_something(unsigned int n, char *s)
{
	*s = *s + 1;	
}

int main (void)
{
	char string[] = "This is a dope string.";

	printf("Before: %s\n", string);
	ft_striteri(string, do_something);
	printf("After: %s\n", string);

	return (0);
}

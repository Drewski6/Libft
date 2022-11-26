#include "../libft/libft.h"
#include <stdio.h>

char	add_one(unsigned int n, char c)
{
	c = c + 1;
	return (c);
}

int main (void)
{
	char string[] = "Hi this is a string.";
	char *new_string;

	new_string = 0;
	new_string = ft_strmapi(string, add_one);
	printf("string: %s\n", string);
	printf("new_string: %s\n", new_string);
	if (new_string)
		free(new_string);

	return (0);
}

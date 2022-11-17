#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft/libft.h"
#include <math.h>

int main (int argc, char *argv[])
{
	char	*return_string;
	size_t	num_elem;
	
	if (atoi(argv[1]) == 0)
	{
		printf("Function,Input String,Return String\n");
	}
	else if (atoi(argv[1]) == 1)
	{
		return_string = strdup(argv[2]);
		printf("strdup,%s,%s\n", argv[2], return_string);
		free(return_string);
	}
	else if (atoi(argv[1]) == 2)
	{
		return_string = ft_strdup(argv[2]);
		printf("strdup,%s,%s\n", argv[2], return_string);
		free(return_string);
	}
	return (0);
}

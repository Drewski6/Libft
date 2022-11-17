#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft/libft.h"
#include <math.h>

int main (int argc, char *argv[])
{
	char *return_value;

	return_value = 0;
	if (atoi(argv[1]) == 0)
	{
		printf("Function,Input String,Input Start,Input len,Return Value\n");
	}
	else if (atoi(argv[1]) == 1)
	{
		//return_value = atoi(argv[2]);
		//printf("atoi,%s,%d\n", argv[2], return_value);
	}
	else if (atoi(argv[1]) == 2)
	{
		return_value = ft_substr(argv[2], atoi(argv[3]), atoi(argv[4]));
		printf("ft_substr,%s,%d,%d,%s\n", argv[2], atoi(argv[3]), atoi(argv[4]), return_value);
		free(return_value);
	}
	return (0);
}

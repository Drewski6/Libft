#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft/libft.h"
#include <math.h>

int main (int argc, char *argv[])
{
	int	return_value;

	return_value = 0;
	if (atoi(argv[1]) == 0)
	{
		printf("Function,Input String, Return Int\n");
	}
	else if (atoi(argv[1]) == 1)
	{
		return_value = atoi(argv[2]);
		printf("atoi,%s,%d\n", argv[2], return_value);
	}
	else if (atoi(argv[1]) == 2)
	{
		return_value = ft_atoi(argv[2]);
		printf("atoi,%s,%d\n", argv[2], return_value);
	}
	return (0);
}

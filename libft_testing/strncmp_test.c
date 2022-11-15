#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft/libft.h"

int main (int argc, char *argv[])
{
	int n;
	int	return_val_1;
	int	return_val_2;

	if (atoi(argv[1]) == 0)
	{
		printf("Function,Input String 1,Input String 2,Input n,Return Value\n");
	}
	else if (atoi(argv[1]) == 1)
	{
		n = atoi(argv[4]);
		return_val_1 = strncmp(argv[2], argv[3], n);
		printf("strncmp,%s,%s,%d,%d\n", argv[2], argv[3], n,return_val_1);
	}
	else if (atoi(argv[1]) == 2)
	{
		n = atoi(argv[4]);
		return_val_2 = ft_strncmp(argv[2], argv[3], n);
		printf("strncmp,%s,%s,%d,%d\n", argv[2], argv[3], n,return_val_2);
	}

	return (0);
}

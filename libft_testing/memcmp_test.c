#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft/libft.h"
#include <math.h>

int main (int argc, char* argv[])
{
	int return_value;


	return_value = 0;
	if (atoi(argv[1]) == 0)
	{
		printf("Function,Input String,Cmp String,Size,Return Value(d),Return Value(c)");

	}
	else if (atoi(argv[1]) == 1)
	{
		return_value = memcmp(argv[2], argv[3], atoi(argv[4]));
		printf("memcmp,%s,%s,%d,%d,%c\n", argv[2], argv[3], atoi(argv[4]), return_value, abs(return_value));
	}
	else if (atoi(argv[1]) == 2)
	{
		return_value = ft_memcmp(argv[2], argv[3], atoi(argv[4]));
		printf("ft_memcmp,%s,%s,%d,%d,%c\n", argv[2], argv[3], atoi(argv[4]), return_value, abs(return_value));
	}
	return (0);
}

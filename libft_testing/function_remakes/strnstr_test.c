#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "../../libft_working/libft.h"
#include <math.h>

int main (int argc, char* argv[])
{
	char	*return_value;

	return_value = 0;
	if (atoi(argv[1]) == 0)
	{
		printf("Function,Big,Little,len,Return Value\n");
	}
	else if (atoi(argv[1]) == 1)
	{
		return_value = strnstr(argv[2], argv[3], atoi(argv[4]));
		printf("strnstr,%s,%s,%d,%s\n", argv[2], argv[3], atoi(argv[4]), return_value);
	}
	else if (atoi(argv[1]) == 2)
	{
		return_value = ft_strnstr(argv[2], argv[3], atoi(argv[4]));
		printf("strnstr,%s,%s,%d,%s\n", argv[2], argv[3], atoi(argv[4]), return_value);
	}
	return (0);
}

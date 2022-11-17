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
		printf("Function,s1,s1 len,s2,s2 len,Return Value,Return Value len\n");
	}
	else if (atoi(argv[1]) == 1)
	{
	}
	else if (atoi(argv[1]) == 2)
	{
		return_value = ft_strjoin(argv[2], argv[3]);
		printf("ft_strjoin,%s,%ld,%s,%ld,%s,%ld\n", argv[2], strlen(argv[2]), argv[3], strlen(argv[3]), return_value, strlen(return_value));
		free(return_value);
	}
	return (0);
}

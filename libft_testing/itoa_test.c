#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft/libft.h"

int main (void)
{
	char *result;
	int min;
	min = -2147483648;
	printf("int min signed: %d\n", min);
	printf("int min unsigned: %u\n", (unsigned int) min);
	result = ft_itoa(-2147483648);
	printf("result is: %s\n", result);
	result = ft_itoa(2147483647);
	printf("result is: %s\n", result);
	if (result)
		free(result);
	return (0);
}

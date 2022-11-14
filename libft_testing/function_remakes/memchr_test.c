#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../../libft_working/libft.h"

int main (int argc, char *argv[])
{
	char	*return_value;
	size_t	len;


	if (atoi(argv[1]) == 0)
	{
		printf("Function,Input String,Search Char,Size,Return Value");
	}
	if (atoi(argv[1]) == 1)
	{
		len = strlen(argv[2]);
		return_value = memchr(argv[2], argv[3][0], len);
		printf("memchr,%s,%c,%ld,%s\n", argv[2], argv[3][0], len, return_value);
	}
	else if (atoi(argv[1]) == 2)
	{
		len = strlen(argv[2]);
		return_value = ft_memchr(argv[2], argv[3][0], len);
		printf("memchr,%s,%c,%ld,%s\n", argv[2], argv[3][0], len, return_value);
	}
	return (0);
}

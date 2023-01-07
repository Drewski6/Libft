#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bsd/string.h>
#include "../libft/libft.h"

int main (void)
{
	char	*dest;

	dest = (char *)malloc(sizeof(char) * 100);
	printf("%ld", strlcat(dest, "lorem ipsum dolor sit amet", 5));
	return 0;
}

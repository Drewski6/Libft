#include <stdio.h>
#include <stdlib.h>
#include "../libft/libft.h"

int main (int argc, char *argv[])
{
	char	**split_array;
	int		return_len;
	int		i;

	i = 0;
	return_len = 0;
	split_array = ft_split(argv[1], argv[2][0]);
	while (split_array[return_len])
		return_len++;
	printf("Return is: ");
	while (i < return_len)
	{
		printf("%s,", split_array[i]);
		i++;
	}
	printf("\n");
	free(split_array);

	return (0);
}

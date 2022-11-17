#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft/libft.h"
#include <math.h>

int main (int argc, char *argv[])
{
	int	return_value;
	char	*ptr;
	int	i;
	size_t	num_elem;
	
	num_elem = atoi(argv[2]);
	return_value = 0;
	if (atoi(argv[1]) == 0)
	{
		printf("Function,Number Elements,Size Elements,Direct Memory Print(Before strlcpy),Direct Memory Print(After strlcpy)\n");
	}
	else if (atoi(argv[1]) == 1)
	{
		ptr = (char *)calloc(num_elem, sizeof(char));
		printf("calloc,%ld,%ld,", num_elem, sizeof(char));
		i = 0;
		while (i < num_elem) 
		{
			printf("%c ", ptr[i]);
			i++;
		}
		ft_strlcpy(ptr, argv[3], num_elem);
		printf(",");
		i = 0;
		while (i < num_elem) 
		{
			printf("%c ", ptr[i]);
			i++;
		}
		printf("\n");
		free(ptr);
	}
	else if (atoi(argv[1]) == 2)
	{
		ptr = (char *)ft_calloc(num_elem, sizeof(char));
		printf("calloc,%ld,%ld,", num_elem, sizeof(char));
		i = 0;
		while (i < num_elem) 
		{
			printf("%c ", ptr[i]);
			i++;
		}
		ft_strlcpy(ptr, argv[3], num_elem);
		printf(",");
		i = 0;
		while (i < num_elem) 
		{
			printf("%c ", ptr[i]);
			i++;
		}
		printf("\n");
		free(ptr);
	}
	return (0);
}

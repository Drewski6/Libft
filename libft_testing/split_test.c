#include <stdio.h>
#include <stdlib.h>
#include "../libft/libft.h"

void	print_return(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		printf("tab[%d]:%s\n", i, tab[i]);
		i++;
	}
	return ;	
}

int main (int argc, char *argv[])
{
	char	**split_array;
	int		return_len;
	int		i;

	i = 0;
	return_len = 0;
	split_array = ft_split("tripouille  42", ' ');

	if (!split_array)
		printf("No return\n");
	else 
		print_return(split_array);

	if (split_array)
	{
		while (split_array[i])
		{
			free(split_array[i]);
			i++;
		}
		free(split_array);
	}
	return (0);
}

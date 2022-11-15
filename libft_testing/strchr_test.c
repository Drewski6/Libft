#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft/libft.h"

int main (int argc, char* argv[])
{
	char 	string[] = "Hi there this is a sample string with a lot of characters. The quick brown fox jumps over the lazy dog.";
	char*	return_val = 0;
	int		i;
	char 	all_printable[200];
	int		len;

	i = 32;
	while(i < 128)
	{
		all_printable[i - 32] = i;
		i++;
	}
	// >=32 <= 127

	i = 0;
	len = 95;		//strlen(all_printable);
	while (i < len)
	{
		if (atoi(argv[1]) == 0)
		{
			return_val = strchr(string, all_printable[i]);
			printf("strchr,%c,%s\n", all_printable[i], return_val);
		}
		else
		{
			return_val = ft_strchr(string, all_printable[i]);
			printf("strchr,%c,%s\n", all_printable[i], return_val);
		}
		i++;
	}
	return (0);
}

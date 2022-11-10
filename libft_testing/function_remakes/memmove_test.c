#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../libft_working/libft.h"

int main (int argc, char* argv[])
{
    char string_src[50] = "This is a sample string.";
    char string_dest[50];
    char string1_src[50] = "This is a sample string.";
    char string1_dest[50];
    int size;

    size = atoi(argv[1]);

    printf("memmove,Before memmove,%s\n", string_dest);
    memmove(string_dest, string_src, size);
    printf("memmove,After memmove,%s\n", string_dest);

    printf("ft_memmove,Before memmove,%s\n", string1_dest);
    ft_memmove(string1_dest, string1_src, size);
    printf("ft_memmove,After memmove,%s\n", string1_dest);

    return (0);
}

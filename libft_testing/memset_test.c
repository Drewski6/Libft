#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft/libft.h"
#define SIZE 10
#define CHAR 'W'

int main (void)
{
    char string[] = "This is a sample string.";

    printf("memset\n");
    printf("\tString before: %s\n", string);
    printf("\tsizeof(char)lksjd: %ld\n", sizeof(char));
    memset(string, CHAR, SIZE*sizeof(char));
    printf("\tString after : %s\n", string);

    char string1[] = "This is a sample string.";
    printf("\nft_memset\n");
    printf("\tString before: %s\n", string1);
    printf("\tsizeof(char)lksjd: %ld\n", sizeof(char));
    ft_memset(string1, CHAR, SIZE*sizeof(char));
    printf("\tString after : %s\n", string1);
    return (0);
}

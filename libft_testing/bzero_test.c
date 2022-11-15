#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft/libft.h"
#define OFFSET 15
#define SIZE 5

int main (void)
{
    int str_len;
    int i;
    char string[] = "Hi this is a string.";
    char string1[] = "Hi this is a string.";

    printf("Function,Action,Result\n");

    // Code for testing bzero.
    str_len = 0;
    str_len = strlen(string);
    printf("bzero,Before bzero,%s\n", string);
    bzero(string + OFFSET, SIZE);
    printf("bzero,After bzero,%s\n", string);
    printf("bzero,Full String,");
    i = 0;
    while (i < str_len)
    {
        printf("%c", string[i]);
        i++;
    }
    printf("\n");

    // Code for testing ft_bzero.
    printf("ft_bzero,Before ft_bzero,%s\n", string1);
    ft_bzero(string1 + OFFSET, SIZE);
    printf("ft_bzero,After ft_bzero,%s\n", string1);
    printf("ft_bzero,Full String,");
    i = 0;
    while (i < str_len)
    {
        printf("%c", string1[i]);
        i++;
    }
    printf("\n");

    return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../libft_working/libft.h"
#define SIZE 6

int main (void)
{
    char string_src[50] = "This is a sample string.";
    char string_dest[50];
    char string1_src[50] = "This is a sample string.";
    char string1_dest[50];

    printf("function,action,result\n");

    printf("memcpy,Before memcpy,%s\n", string_dest);
    memcpy(string_dest, string_src, SIZE);
    printf("memcpy,After memcpy,%s\n", string_dest);

    printf("ft_memcpy,Before ft_memcpy,%s\n", string1_dest);
    ft_memcpy(string1_dest, string1_src, SIZE);
    printf("ft_memcpy,After ft_memcpy,%s\n", string1_dest);

    return(0);
}

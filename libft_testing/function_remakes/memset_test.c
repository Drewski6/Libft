#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../libft_working/libft.h"

int main (void)
{
    char string[] = "This is a sample string.";

    printf("String before: %s\n", string);
    printf("sizeof(char)lksjd: %ld\n", sizeof(char));
    memset(string, '.', 13*sizeof(char));
    printf("String after : %s\n", string);

    return (0);
}

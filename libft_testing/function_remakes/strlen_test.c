// test for strlen and ft_strlen

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../libft_working/libft.h"

int main (int argc, char* argv[])
{
    //char string[] = "This is a sample sting.";
    printf("Length of string   (strlen): %ld\n", strlen(argv[1]));
    printf("Length of string(ft_strlen): %ld\n", ft_strlen(argv[1]));

    return (0);
}
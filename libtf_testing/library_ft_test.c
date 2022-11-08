//  For testing with libft.a library and header file.
//  To compile and link use this command:
//      gcc library_ft_test.c -L../libft_working -lft

#include "../libft_working/libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    char string[] = "Hi1, there, my name is string.";

    // test for ft_isalpha
    if (ft_isalpha(string[atoi(argv[1])]))
        printf("The character is a letter.\n");
    else
        printf("The character is not a letter.\n");

    // test for ft_isdigit
    if (ft_isdigit(string[atoi(argv[1])]))
        printf("The character is a digit.\n");
    else
        printf("The character is not a digit.\n");
    
    //  test for ft_isalnum
    if (ft_isalnum(string[atoi(argv[1])]))
        printf("The character is alpha-numeric.\n");
    else
        printf("The character is not alpha-numeric.\n");
}
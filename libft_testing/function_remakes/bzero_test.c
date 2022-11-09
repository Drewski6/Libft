#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    char string[] = "Hi this is a string.";
    printf("Before bzero: %s\n", string);
    bzero(string + 10, 9);
    printf("After bzero : %s\n", string);
    return (0);
}

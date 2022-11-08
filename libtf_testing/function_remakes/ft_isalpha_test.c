#include <ctype.h>
#include <stdio.h>

// Returns true/false for a single character.

int main(void)
{
    char string[] = "Hi, this is a sample string.";
    if (isalpha(string[2]))
        printf("Statement was true.");
    else
        printf("Statement was false.");
    return (0);
}
/*
Fill in header at ecole 42
*/

#include "libft.h"

long ft_strlen(const char* str)
{
    long i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}
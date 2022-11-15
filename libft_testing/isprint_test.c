#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "../../libft_working/libft.h"

int main (int argc, char* argv[])
{
    int i = 0;
    if (atoi(argv[1]) == 0)
    {
        while (i < 128)
        {
            if (isprint(i)) 
                printf("%d, Character '%c' is printable.\n", i, i);
            else
                printf("%d, Character is not printable.\n", i);
            i++;
        }
    }
    else
    {
        while (i < 128)
        {
            if (ft_isprint(i)) 
                printf("%d, Character '%c' is printable.\n", i, i);
            else
                printf("%d, Character is not printable.\n", i);
            i++;
        }
    }

    return (0);
}
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "../../libft_working/libft.h"

int main (int argc, char* argv[])
{
    int i = 0;

    if (atoi(argv[1]) == 0)
    {
        while (i < atoi(argv[2]))
        {
            if (isascii(i))
                printf("%d, The character is %c\n", i, i);
            else
                printf("%d, Returned false.\n", i);
            i++;
        }
    }
    else
    {
        while (i < atoi(argv[2]))
        {
            if (ft_isascii(i))
                printf("%d, The character is %c\n", i, i);
            else
                printf("%d, Returned false.\n", i);
            i++;
        }
    }



    return (0);
}

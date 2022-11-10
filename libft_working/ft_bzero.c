/*
    42 Header here
*/

#include "libft.h"

void    ft_bzero(void* str, unsigned int len)
{
    unsigned int i;

    i = 0;
    while(i < len)
    {
        *(char*)str = 0;
        str++;
        i++;
    }
    return;    
}

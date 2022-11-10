#include "libft.h"

void*   ft_memcpy(void* dest, const void* src, unsigned int len)
{
    unsigned int i;

    i = 0;
    while (i < len)
    {
        *(char*)dest = *(char*)src;
        dest++;
        src++;
        i++;
    }
    return (dest);
}

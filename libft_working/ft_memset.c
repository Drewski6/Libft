/*
    Placeholder for 42 header.
*/

#include "libft.h"

/*
returns:
    void pointer to beginning of edited string.. Returns pointer the same as input.
parameters: 
    void* str : Any memory item to change
    int c     : value to replace mem location with. Can be int, but is placed like a char. Need to test ints greater than 127.
    size_t len: Number of bytes to replace in str with c.
*/
void*   ft_memset(void* str, int c, int len)
{
    int i;

    i = 0;
    while (i < len)
    {
        *(char*)str = c;
        str++;
        i++;
    }
    return (str);
}

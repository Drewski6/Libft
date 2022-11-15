#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bsd/string.h>
#include "../libft/libft.h"

int main (int argc, char* argv[])
{
    char string_src[50] = "Hi this is a source string.";
    char string_dest[50]= "";
    int size;
    int return_val;

    size = atoi(argv[2]);
    if (atoi(argv[1]) == 0)
    {
        //printf("strlcpy,before,%d,%s\n",size, string_dest);
        return_val = strlcat(string_dest, string_src, size);
        printf("strlcpy,after,%d,%s,%d\n",size, string_dest, return_val);
    }
    else if (atoi(argv[1]) == 1)
    {
        //printf("ft_strlcpy,before,%d,%s\n",size, string1_dest);
        return_val = ft_strlcat(string_dest, string_src, size);
        printf("ft_strlcpy,after,%d,%s,%d\n",size, string_dest, return_val);
    }
    return (0);
}

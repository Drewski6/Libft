#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "../../libft_working/libft.h"

int main (int argc, char* argv[])
{
    char string_src[50] = "Hi this is a source string.";
    char string_all_ascii_vals[128] = "";
    int i;
    int return_val;
    int len;

    len = strlen(string_src);
    i = 1;

    while (i < 128)
    {
        string_all_ascii_vals[i] = i;
        i++;
    }

    i = 0;
    while (i < len)
    {
        if (atoi(argv[1]) == 0)
        {
            return_val = toupper(string_src[i]);
            printf("toupper,%d,%d,%d,%c,%c\n", string_src[i], return_val, len, string_src[i], return_val);
        }
        else if (atoi(argv[1]) == 1)
        {
            return_val = ft_toupper(string_src[i]);
            printf("toupper,%d,%d,%d,%c,%c\n", string_src[i], return_val, len, string_src[i], return_val);
        }
        i++;
    }

    i = 0;
    while (i < 128)
    {
        if (atoi(argv[1]) == 0)
        {
            return_val = toupper(string_all_ascii_vals[i]);
            printf("toupper,%d,%d,%d,%c,%c\n", string_all_ascii_vals[i], return_val, len, string_all_ascii_vals[i], return_val);
        }
        else if (atoi(argv[1]) == 1)
        {
            return_val = ft_toupper(string_all_ascii_vals[i]);
            printf("toupper,%d,%d,%d,%c,%c\n", string_all_ascii_vals[i], return_val, len, string_all_ascii_vals[i], return_val);
        }
        i++;
    }
    return (0);
}

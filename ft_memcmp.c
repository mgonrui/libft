#include "libft.h"
#include <stdlib.h>

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    size_t i;
    unsigned char *su_str1;
    unsigned char *su_str2;
    su_str1 = (unsigned char *)str1;
    su_str2 = (unsigned char *)str2;

    i = 0;
    while (i < n)
    {
        if (su_str1[i] != su_str2[i])
        {
            return (su_str1[i] - su_str2[i]);
        }
        i++;
    }
    return 0;
}

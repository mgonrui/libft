
#include "libft.h"

size_t ft_strlcpy(char *dest, char *src, size_t size)
{
    size_t i;
    
    if (size == 0)
        return (ft_strlen(src));
    i = 0;
    while (src[i] != '\0' &&  i < size - 1) 
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return (ft_strlen(src));
}
        
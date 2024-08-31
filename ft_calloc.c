#include "libft.h"

void *ft_calloc(size_t num, size_t size)
{
    char *p_calloc;
    p_calloc = malloc(num * size);
    if (!(p_calloc))
        return NULL;
    ft_bzero(p_calloc, num * size);
    return  (void *)p_calloc;
}
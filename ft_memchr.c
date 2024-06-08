#include "libft.h"
#include <stdlib.h>
void			*ft_memchr(const void *str, int c, size_t n)
{

unsigned char *cu_str;    
unsigned char cu_c;
size_t i;

cu_str = (unsigned char *)str;
cu_c = (unsigned char)c;
i = 0;

while (i < n)
{

    if (cu_str[i] == cu_c)
        return &cu_str[i];
    i++;
}

return NULL;
}
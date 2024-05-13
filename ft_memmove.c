#include "libft.h"
#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char *p_dst;
	char *p_src;
	size_t i ;
	size_t j ;

	i = 0;
	j = 0;
	p_dst = (char *)dst;
	p_src = (char *)src;
	if ((!dst && !src) || (dst == src))
		return NULL;	
	if (dst > src)
	{
		while (i < len)
			{
				len--;
				p_dst[len] = p_src[len];
			}
	}
	else
	{
		ft_memcpy(p_dst, p_src, len);
	}
	return dst;
}


#include <string.h>

int main() {
    char str[50] = "1234567890";

    // Copy the string to the middle of itself
	memmove(str, str + 1, 9);
    // memcpy(str + 7, str, 13);
    // ft_memmove(str, str + 1, 9);

    printf("Modified string: %s\n", str);

    return 0;
}
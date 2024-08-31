#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char *p_dst;
	char *p_src;

	p_dst = (char *)dst;
	p_src = (char *)src;
	if (!dst && !src)
		return NULL;	
	if (dst > src)
	{
		while (len--)
				p_dst[len] = p_src[len];
	}
	else
	{
		ft_memcpy(p_dst, p_src, len);
	}
	return dst;
}


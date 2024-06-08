#include "libft.h"

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char *p_dst;
	const char *p_src;
	size_t i;

	i = 0;
	p_dst = (char *)dst;
	p_src = (const char *)src;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		p_dst[i] = p_src[i];
		i++;
	}
	return dst;
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[50] = "1234567890";

//     // Copy the string to the middle of itself
//     // memcpy(str + 7, str, 13);
//     // memmove(str + 7, str, 13);
//     ft_memcpy(str + 7, str, 2);
//     printf("Modified string: %s\n", str);
//     return 0;
// }

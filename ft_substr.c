#include "libft.h"
#include <stdlib.h>
char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    size_t s_len;

    int i = 0;
    s_len = ft_strlen(s);
    substr = malloc(sizeof(char) * len + 1);
    if (!(substr))
        return NULL;
    if ((start + len) <= s_len)
    {
        substr[start + len] = '\0';
        while (len-- && s[i] != '\0')
            substr[start++] = s[i++];
    }
    return substr;
}
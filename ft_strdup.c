#include "libft.h"

char *ft_strdup(const char *string)
{
    char *p_string;
    p_string = malloc(sizeof(char) * ft_strlen(string) + 1);
    if (!(p_string))
        return 0;
    ft_memcpy(p_string, string, ft_strlen(string) + 1);
    return p_string;
}
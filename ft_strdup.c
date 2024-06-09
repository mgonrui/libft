#include "libft.h"
#include <stdlib.h>
#include <string.h>
char *ft_strdup(const char *string)
{
    char *p_string;
    p_string = malloc(sizeof(char) * ft_strlen(string) + 1);
    if (!(p_string))
        return 0;
    strcpy(p_string, string);
    p_string[ft_strlen(string)] = '\0';
    return p_string;

}
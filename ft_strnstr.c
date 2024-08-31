#include "libft.h"

int ft_little_match(const char *big, const char *little)
{
    int i = 0;
    while (little[i] != '\0') 
    {
        if (little[i] != big[i])
            return 0;
        i++;
    }
    return 1;
}
char *ft_strnstr(const char *big,	const char *little, size_t len)
{
    size_t i;
    size_t j;
    i = 0;

    if ((little != NULL) && (little[0] == '\0')) 
        return (char *)big;
    while (big[i] != '\0')
    {
        j = 0;
        while (little[j] == big[j + i] && (j + i) < len) 
        {
            if (little[j + 1] == '\0')
                return ((char *)&big[i]);
            j++;
        }
        i++;
    }
return NULL;
}
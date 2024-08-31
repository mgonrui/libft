#include "libft.h"

void ft_cpy(char *dest, const char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
char	*ft_strjoin(char const *s1, char const *s2)
{
	char *conc_str;
	conc_str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!(conc_str))
		return NULL;
	ft_cpy(conc_str, s1);
	ft_cpy(&conc_str[ft_strlen(conc_str)], s2);
	return conc_str;
}

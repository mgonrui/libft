#include "libft.h"
#include <stdlib.h>

#include <stdio.h>


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

// int main(void)
// {
// 	char *s1 = "hello ";
// 	char *s2 = "world";
// 	char p[100];
// 	printf("%s\n", ft_strjoin(s1, s2));
// 	ft_cpy(p, s1);
// 	printf("%s\n", p);
// 	return 0;
// }
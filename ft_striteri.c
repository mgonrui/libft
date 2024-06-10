#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int i;

	i = 0;

	while (s[i])
	{
		f(i,&s[i]);
		i++;
	}
}

// #include <ctype.h>

// void uppercase(unsigned int index, char *ch)
// {
//     *ch = toupper(*ch);
// }

// int main(void)
// {
// 	char str[] = "hello world";
// 	ft_striteri(str, uppercase);
// 	printf("%s\n", str);
// 	return 0;
// }
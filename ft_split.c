#include "libft.h"
#include <stdlib.h>

#include <stdio.h>
int count_words(char const *s, char delim)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (!s)
		return 0;
	while (s[i])
	{
		while (s[i] == delim && s[i])
			i++;
		while (s[i] != delim && s[i])
			i++;
		count++;
	}
	if (s[i - 1] == delim)
		count--;
	return count;
}
char			**ft_split(char const *s, char c)
{

}

int main(void)
{
	printf("%d\n", count_words("hello      world      a ", ' '));
	return 0;
}
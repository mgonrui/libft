#include "libft.h"
#include <stdlib.h>

#include <stdio.h>
int ft_count_words(char const *s, char delim)
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
	if (s[i - 1] == delim && delim != '\0')
		count--;
	return count;
}

void ft_copy_sub_to_str(const char *pos, char delim, char *substr)
{
	int i = 0;
	while (pos[i] != delim && pos[i])
	{
		substr[i] = pos[i];
		i++;
	}
	substr[i] = '\0';
}


static void	ft_free(char **str)
{
	int	i;

	i = -1;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	int i;
	char **p_to_strs;
	int count;
	int size_to_malloc;
	
	count = 0;
	i = 0;
	p_to_strs = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!p_to_strs)
		return 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i])
			i++;
		size_to_malloc = 0;
		while (s[i] != c && s[i])
		{
			size_to_malloc++;
			i++;
		}
		p_to_strs[count] = malloc(sizeof(char) * (size_to_malloc + 1));
		if (!p_to_strs[count])
			return (ft_free(p_to_strs), NULL);
			// return (NULL);
		if (s[i - size_to_malloc] != '\0')
			ft_copy_sub_to_str(&s[i - size_to_malloc], c, p_to_strs[count++]);
	}
	p_to_strs[count] = NULL;
	return p_to_strs;
}


 /* int main(void)
 {
 	// char *s = "split  ||this|for|me|||||!|";
 	char *s = "      split       this for   me  !       ";
 	char c = ' ';
     int i = 0;
     char **result = ft_split(s, c);	
 	printf("%d\n", ft_count_words(s, c));
 	while (result[i])
 	{
 		printf("result[%d] = (%s)\n", i, result[i]);
		i++;
 	}
 	printf("result[%d] = (%s)\n", i, result[6]);
 	return 0;
 }
 */

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
	while (s[i] != '\0')
	{
		while (s[i] == delim && s[i] != '\0')
			i++;
		while (s[i] != delim && s[i] != '\0')
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
	while (pos[i] != delim && pos[i] != '\0')
	{
		substr[i] = pos[i];
		i++;
	}
	substr[i] = '\0';
}


static void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void ft_add(int *substr_size, int *i)
{
	(*substr_size)++;	
	(*i)++;
}

char	**ft_split(char const *s, char c)
{
	int i;
	char **p_to_strs;
	int count;
	int substr_size;
	
	count = 0;
	i = 0;
	p_to_strs = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!p_to_strs)
		return NULL;
	while (count < ft_count_words(s, c))
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		substr_size = 0;
		while (s[i] != c && s[i] != '\0')
			ft_add(&substr_size, &i);
		p_to_strs[count] = ft_substr(s, i - substr_size, substr_size);
		if (!p_to_strs[count])
			return (ft_free(p_to_strs), NULL);
		count++;
	}
	p_to_strs[ft_count_words(s, c)] = NULL;
	return p_to_strs;
}



// int main(void)
//  {
//  	// char *s = "split  ||this|for|me|||||!|";
//  	char *s = "gggggggggggggggggg";
//  	char c = 'g';
//      int i = 0;
//      char **result = ft_split(s, c);	
//  	printf("%d\n", ft_count_words(s, c));
//  	while (result[i])
//  	{
//  		printf("result[%d] = (%s)\n", i, result[i]);
// 		i++;
//  	}
//  	printf("result[%d] = (%s)\n", i, result[6]);
//  	return 0;
//  }



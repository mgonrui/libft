/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariogo2 <mariogo2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 17:18:20 by mariogo2          #+#    #+#             */
/*   Updated: 2024/06/09 17:54:35 by mariogo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (start >= (size_t)ft_strlen(s))
		return (ft_strdup(""));
	if (len < (size_t)ft_strlen(s))
	{
		substr = malloc(sizeof(char) * len + 1);
		if (!(substr))
			return (NULL);
	}
	else
	{
		substr = malloc(sizeof(char) * ((size_t)ft_strlen(s) - start) + 1);
		if (!(substr))
			return (NULL);
	}
	while (i < len && s[i] != '\0')
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

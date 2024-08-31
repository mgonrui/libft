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
	size_t size_to_malloc;

	i = 0;
	if (start >= (size_t)ft_strlen(s))
		return (ft_strdup(""));
	if ( start + len < (size_t)ft_strlen(s))
	{
		size_to_malloc = len;
	}
	else
	{
		size_to_malloc = ft_strlen(&s[start]);
	}
	substr = malloc ( sizeof(char) * size_to_malloc + 1);
	if (!(substr))
		return (NULL);
	while (i < size_to_malloc)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

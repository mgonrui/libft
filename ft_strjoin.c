/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariogo2 <mariogo2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:08:55 by mariogo2          #+#    #+#             */
/*   Updated: 2024/09/10 19:09:06 by mariogo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_cpy(char *dest, const char *src)
{
	int	i;

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
	char	*conc_str;

	conc_str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!(conc_str))
		return (NULL);
	ft_cpy(conc_str, s1);
	ft_cpy(&conc_str[ft_strlen(conc_str)], s2);
	return (conc_str);
}

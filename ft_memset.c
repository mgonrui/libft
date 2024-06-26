/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariogo2 <mariogo2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:53:20 by mariogo2          #+#    #+#             */
/*   Updated: 2024/05/13 17:32:32 by mariogo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memset(void *s, int c, size_t n)
{
	size_t i;
	unsigned char *p_s;

	i = 0;
	p_s = (unsigned char *)s;	
	while (i < n)
	{
		p_s[i] = (unsigned char)c;
		i++;
	}
	return s;
}
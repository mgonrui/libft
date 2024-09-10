/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariogo2 <mariogo2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:03:10 by mariogo2          #+#    #+#             */
/*   Updated: 2024/09/10 19:13:56 by mariogo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	char	*p_calloc;

	p_calloc = malloc(num * size);
	if (!(p_calloc))
		return (NULL);
	ft_bzero(p_calloc, num * size);
	return ((void *)p_calloc);
}

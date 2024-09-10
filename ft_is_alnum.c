/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_alnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariogo2 <mariogo2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:04:00 by mariogo2          #+#    #+#             */
/*   Updated: 2024/09/10 19:04:02 by mariogo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int argument)
{
	if ((argument >= '0' && argument <= '9') || ((argument >= 'a'
				&& argument <= 'z') || (argument >= 'A' && argument <= 'Z')))
		return (1);
	return (0);
}

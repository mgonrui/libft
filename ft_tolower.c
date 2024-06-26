/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariogo2 <mariogo2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:36:36 by mariogo2          #+#    #+#             */
/*   Updated: 2024/05/13 19:25:56 by mariogo2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_tolower(int ch)
{
	if (ch >= 'A' && ch <= 'Z') 
		return (ch + ('a' -  'A'));
	return (ch);
}
// #include <stdio.h>

// int main() {
//     char c;

//     c = 'm';
//     printf("%c -> %c", c, ft_tolower(c));

//     c = 'D';
//     printf("\n%c -> %c", c, ft_tolower(c));

//     c = '9';
//     printf("\n%c -> %c", c, ft_tolower(c));
//     return 0;
// }
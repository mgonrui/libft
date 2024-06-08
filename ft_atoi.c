#include "libft.h"
int ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r')
		return 1;
	return 0;
}
int ft_sign_type(char c)
{
	if (c == '+')
		return 1;
	else 
		return -1;
}

int ft_is_sign(char c)
{
	if (c == '+' || c == '-')
		return 1;
	return 0;
}

int ft_atoi(char *str)
{
	int i;
	int sign;
	int number;

	number = 0;	
	sign = 1;
	i = 0;
	while (ft_isspace(str[i])) 
		i++;
	if (ft_is_sign(str[i]))
		sign = ft_sign_type(str[i++]);
	while (ft_isdigit(str[i])) 
	{
		number *= 10;
		number += str[i] - '0';
		i++;
	}
	return number * sign;
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_atoi("    10	lo"));
// 	return 0;
// }

int ft_isalpha(int argument)
{
	if ((argument >= 'a' && argument <= 'z') || (argument >= 'A' && argument <= 'Z'))
		return 1;
	return 0;
}


/*
#include <stdio.h>
int main()
{
    char c;
    c = 'Q';
    printf("\nResult when uppercase alphabet is passed: %d", ft_isalpha(c));

    c = 'q';
    printf("\nResult when lowercase alphabet is passed: %d", ft_isalpha(c));

    c='+';
    printf("\nResult when non-alphabetic character is passed: %d", ft_isalpha(c));

    return 0;
}
*/
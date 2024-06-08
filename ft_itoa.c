#include <stdio.h>

int count_digits(int n)
{
    int ndigits;
    ndigits = 0;

    while (n > 0)
    {
        
    }
    return ndigits;
}
int  ft_itoa(int n)
{

    char *reversed_arr;
    int i = 0;

    while (n > 0)
    {
        // reversed_arr[i] = (n % 10) + '0';
        printf("%d\n", n % 10);
        n = n / 10;
        i++;
    
    }
    return i;
}

int main(void)
{
    printf("%d\n", ft_itoa(12345));

}
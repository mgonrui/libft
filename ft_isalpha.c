
int ft_isalpha(int argument)
{
	if ((argument >= 'a' && argument <= 'z') || (argument >= 'A' && argument <= 'Z'))
		return 1;
	return 0;
}
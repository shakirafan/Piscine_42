int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[0] != '\0')
	{
		str++;
		i++;
	}
	ft_putchar(i + 48);
	return (i);
}

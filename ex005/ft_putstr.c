void	ft_putstr(char *str)
{
	while (str[0] != '\0')
	{
		ft_putchar(str[0]);
		str++;
	}
}

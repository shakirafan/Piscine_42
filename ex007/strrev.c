char ft_strrev(char *str)
{
	int i;
	char *ptr;

	i = 0;
	ptr = &str[0];
	while (str[i] != '\0')
	{
		i++;
	}
	while (str[i] != str[0])
	{
		ft_putchar(str[i] + '0');
		i--;
	}
}


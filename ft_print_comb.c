void display(char* string)
{
	ft_putchar(string[0]);
	ft_putchar(string[1]);
	ft_putchar(string[2]);
}

void print_comma_space()
{
	ft_putchar(',');
	ft_putchar(' ');
}

void ft_print_comb(void)
{
	char tab[4];

	tab[0]= '0', tab[1] = '1', tab[2] = '2';
	while (tab[0] != '7')
	{
		if (tab[2] > '9')
		{
			tab[1]++;
			tab[2] = tab[1] + 1;
		}
		if (tab[1] > '8')
		{
			tab[0]++;
			tab[1] = tab[0] + 1;
			tab[2] = tab[1] + 1;
		}
	display(tab);
	if (tab[0] != '7')
	{
		print_comma_space();
	}
	tab[2]++;
	}
}

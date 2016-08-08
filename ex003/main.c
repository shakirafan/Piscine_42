int		ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main()
{
	int a;
	int b;

	a = 18;
	b = 5;

	ft_ultimate_div_mod(a, b);
}

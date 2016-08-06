void ft_print_comb_2(void)
{
	int nb;
	int nb_2;

	nb = 01;
	nb_2 =00;
	while ( nb != 100 && nb_2 != 99)
	{
		ft_putchar(nb_2 / 10+('0'));
		ft_putchar(nb_2 % 10 +('0'));
		ft_putchar(' ');
		ft_putchar(nb / 10 +('0'));
		ft_putchar(nb % 10 +('0'));
		if(nb_2 != 98)
			ft_putchar(',');
		
		nb++;
		if (nb == 100)
		{
			nb_2++;
			nb = nb_2 + 1;
		}
	}
	ft_putchar('\n');
}

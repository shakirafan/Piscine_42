void	ft_ultimate_div_mod(int *a, int *b)
{
	int stock;

	stock = *a;
	*a = *a / *b;
	*b = stock % *b;
}

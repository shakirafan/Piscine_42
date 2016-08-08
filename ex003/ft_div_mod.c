void	ft_div_mod(int a, int b, int *div ,int *mod)
{
	*div = 0;
	*mod = 0;
	*div = a / b;
	*mod = a % b;
}

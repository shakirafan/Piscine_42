void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int i;

	i = 0;
	while (i < length)
	{
		tab[i] = i + 1;
		(*f)(tab[i]);
		i++;
	}
}

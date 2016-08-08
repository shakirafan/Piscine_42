int		ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	char string[5];

	string[0] = 'a';
	string[1] = 'b';
	string[2] = 'c';
	string[3] = 'd';
	string[4] = 'e';
	ft_putstr(string);
}

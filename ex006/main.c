int ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	char string[4];

	string[0] = 'a';
	string[1] = 'b';
	string[2] = 'e';
	string[3] = 'd';
	ft_strlen(string);

}

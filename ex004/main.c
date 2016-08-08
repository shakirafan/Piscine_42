int ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	int a;
	int b;
	int *ptr_1;
	int *ptr_2;

	a = 65;
	b = 9;
	ptr_1 = &a;
	ptr_2 = &b;
	ft_ultimate_div_mod(ptr_1, ptr_2);
}

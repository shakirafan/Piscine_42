#include <unistd.h>

void	ft_is_negative(int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	ft_is_negative(3);
	ft_is_negative(-3);
	ft_is_negative(0);
}
